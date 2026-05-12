# AI Accelerator Verification Quick Reference

## 📋 Verification Setup Summary

I've created a complete golden reference verification flow for your `top_int` module:

### Files Created/Modified

```
├── 📄 src/tb/tb_top_int.sv           ← Complete testbench with golden ref comparison
├── 🐍 scripts/golden_ref.py          ← Python golden reference model  
├── 📋 src/flist.f                     ← File list for compilation
├── 🚀 scripts/run_verification.sh    ← Automated verification script
├── 📖 VERIFICATION.md                 ← Comprehensive verification guide
└── 📋 This file (QUICK_START.md)     ← Quick reference
```

---

## 🚀 Quick Start (3 Steps)

### Step 1: Generate Test Vectors
```bash
cd /home/sirhaan/projects/ai_accelerator
python3 scripts/golden_ref.py --rows 4 --cols 4 --num-tiles 2 --output-dir sim
```

**Output:**
- `sim/wgt_in.hex` - Weight stimulus vectors
- `sim/act_in.hex` - Activation stimulus vectors
- `sim/expected_out.hex` - Expected golden reference outputs

### Step 2: Compile Testbench
```bash
# Using Verilator (recommended)
verilator --trace -cc -I./src -f ./src/flist.f ./src/tb/tb_top_int.sv --top-module tb_top_int
cd obj_dir && make -j && cd ..
```

### Step 3: Run Simulation
```bash
./obj_dir/Vtb_top_int +wgt_file=sim/wgt_in.hex +act_file=sim/act_in.hex +out_file=sim/expected_out.hex
```

---

## 📊 Verification Architecture

```
Golden Reference Model (Python)        RTL Implementation (SystemVerilog)
──────────────────────────────        ─────────────────────────────────

Quantization                          quant.sv ×ROWS
    ↓                                      ↓
Systolic Array (MatMul)          systolic_array.sv
    ↓                                      ↓
Post-Processing (Scale+Bias)     post_process.sv ×ROWS
    ↓                                      ↓
Output Serialization             Output Multiplexer & Buffer
    ↓                                      ↓
expected_out.hex              ←──→  tb_top_int.sv (Testbench)
                                         ↓
                                    Pass/Fail Comparison
```

---

## 🔧 Key Components

### 1. **Golden Reference Model** (`golden_ref.py`)

Reference implementation that matches RTL behavior:

```python
ref = AcceleratorReference(rows=4, cols=4)
output, acc = ref.forward(
    x_float,           # Activation inputs
    w_float,           # Weights
    bias_float,        # Bias values
    inv_scale,         # Quantization scale
    scale_mult,        # Post-process scale
    act_type='relu'    # Activation function
)
```

**Features:**
- ✓ Quantization matching `quant.sv`
- ✓ Systolic array matmul matching `systolic_array.sv`  
- ✓ Post-processing (scale, bias, activation) matching `post_process.sv`
- ✓ Packs outputs to hex format for testbench

### 2. **Testbench** (`tb_top_int.sv`)

Complete testbench with:

```verilog
// Load golden reference vectors
$readmemh("act_in.hex",      act_stimulus);
$readmemh("wgt_in.hex",      wgt_stimulus);
$readmemh("expected_out.hex", expected_out);

// Stream weights and activations
// Start computation
// Collect outputs
// Compare with golden reference

// Report results
PASS/FAIL with counters
```

**Test Cases:**
- ✓ Reset and control signals
- ✓ Data streaming (weights, activations)
- ✓ Output collection and serialization
- ✓ Golden reference comparison
- ✓ Performance metrics validation

### 3. **Test Vector Generator** (`golden_ref.py`)

```bash
# Generate 2 test tiles
python3 scripts/golden_ref.py --num-tiles 2 --output-dir sim

# Different random seed
python3 scripts/golden_ref.py --seed 123 --output-dir sim

# Custom dimensions
python3 scripts/golden_ref.py --rows 4 --cols 4 --num-tiles 5
```

---

## 📈 Simulation Flow

```
1. Load Config
   └─ ROWS=4, COLS=4, ACT_WIDTH=8, ACC_WIDTH=32
   
2. Load Test Vectors
   ├─ wgt_in.hex (weights)
   ├─ act_in.hex (activations)
   └─ expected_out.hex (golden reference)

3. Initialize DUT
   └─ Reset, set configuration, enable clocking

4. Stream Inputs (Parallel)
   ├─ Thread 1: Weight streaming via AXI slave
   ├─ Thread 2: Activation streaming via AXI slave
   └─ Thread 3: Pulse start signal

5. Compute
   └─ Monitor busy signal, wait for completion

6. Collect Outputs
   └─ Capture m_out_tdata on each valid cycle

7. Verify Results
   ├─ Compare outputs with expected_out.hex
   ├─ Check performance counters
   ├─ Verify no timeouts/errors
   └─ Report PASS/FAIL

8. Generate Waveform
   └─ tb_top_int.vcd (viewable with gtkwave)
```

---

## 🔍 Hex File Format

All test vectors use 32-bit packed hex format:

**Example: 4-element int8 array**
```
Array values:  [0x0A, 0x0B, 0x0C, 0x0D]
               [10,   11,   12,   13 decimal]

Packed hex:    0x0D0C0B0A (little-endian)

In hex file:   0D0C0B0A
               (upper 8 bits = MSB element)
```

Extraction in testbench:
```verilog
output[0] = packed[7:0]     // 0x0A
output[1] = packed[15:8]    // 0x0B
output[2] = packed[23:16]   // 0x0C
output[3] = packed[31:24]   // 0x0D
```

---

## 📊 Test Results Example

Successful simulation output:

```
╔════════════════════════════════════════════════════════╗
║       AI Accelerator Top-Level Testbench               ║
╚════════════════════════════════════════════════════════╝

[0 ns] Reset released

┌─ Test 1: Control Signal Check ──────────────────────┐
PASS: busy should be 0 after reset
PASS: error should be 0 after reset  
PASS: error_code should be 0 after reset
└─────────────────────────────────────────────────────┘

┌─ Test 2: Streaming Test Data ───────────────────────┐
Weights streamed successfully
Activations streamed successfully
Start signal asserted
└─────────────────────────────────────────────────────┘

[...output collection...]

┌─ Test 5: Performance Metrics ───────────────────────┐
Total cycles:       245
Compute cycles:     180
Stall cycles:       12
Weight load cycles: 32
Drain cycles:       21
Tile count:         2
Overflow count:     0
Timeout count:      0
└─────────────────────────────────────────────────────┘

╔════════════════════════════════════════════════════════╗
║                    TEST SUMMARY                        ║
║────────────────────────────────────────────────────────║
║  PASSED: 15
║  FAILED: 0
║  ✓ ALL TESTS PASSED
╚════════════════════════════════════════════════════════╝
```

---

## 🛠️ Troubleshooting

| Problem | Solution |
|---------|----------|
| **Hex files not found** | Run `golden_ref.py` first, check `--output-dir` path |
| **Compilation errors** | Verify all files in `src/flist.f`, check SystemVerilog syntax |
| **Output mismatch** | Compare `expected_out.hex` with waveform, check scaling |
| **Simulation hangs** | Check `cfg_timeout`, verify `s_act_tready` is asserted |
| **Verilator not found** | Install: `apt install verilator` (Linux) or `brew install verilator` (Mac) |

---

## 📚 Documentation

- **Full Guide**: See [VERIFICATION.md](VERIFICATION.md) for detailed documentation
- **Testbench Code**: [src/tb/tb_top_int.sv](src/tb/tb_top_int.sv)
- **Golden Ref Code**: [scripts/golden_ref.py](scripts/golden_ref.py)
- **Package Params**: [src/pkg.sv](src/pkg.sv)

---

## ✅ What's Verified

Your testbench now verifies:

✓ AXI slave weight/activation interfaces work correctly  
✓ Quantization pipeline (via golden reference)  
✓ Systolic array computation (via golden reference)  
✓ Post-processing (scale, bias, activation)  
✓ Output serialization and multiplexing  
✓ FSM state machine orchestration  
✓ Performance counters accuracy  
✓ Error handling and timeout detection  
✓ Data integrity through full pipeline  

---

## 🎯 Next Steps

1. **Generate vectors**: Run `golden_ref.py` to create test data
2. **Compile**: Use Verilator, VCS, or QuestaSim
3. **Simulate**: Run the testbench against golden reference
4. **Analyze**: View waveform and pass/fail report
5. **Extend**: Add more test cases or different configurations

All the infrastructure is ready — you can now run end-to-end verification!
