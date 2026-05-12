# AI Accelerator Top-Level Verification Guide

This document describes the verification flow for the `top_int` module using golden reference testing.

## Overview

The verification uses a **golden reference model** (Python-based) to generate expected outputs, which are then compared against the RTL simulation results in SystemVerilog.

```
┌─────────────────────────────────────────────────────────────┐
│                Verification Flow                            │
├─────────────────────────────────────────────────────────────┤
│                                                              │
│  1. Generate Test Vectors          2. Run RTL Simulation   │
│     (golden_ref.py)                   (tb_top_int.sv)      │
│        ↓                                 ↓                  │
│  ┌──────────────────┐             ┌──────────────────┐    │
│  │ wgt_in.hex       │             │ Weight Input    │    │
│  │ act_in.hex       │────────────→│ Activation      │    │
│  │ expected_out.hex │             │ Clock/Control   │    │
│  └──────────────────┘             └──────────────────┘    │
│                                         ↓                  │
│  3. Compare Results                DUT Simulation          │
│     (Check outputs)                    ↓                  │
│        ↓                          ┌──────────────────┐    │
│  ┌──────────────────┐             │ m_out_tdata     │    │
│  │ PASS/FAIL Report │←────────────│ m_out_tvalid    │    │
│  │ Pass count       │             │ Performance cnt │    │
│  │ Fail count       │             └──────────────────┘    │
│  └──────────────────┘                                      │
│                                                              │
└─────────────────────────────────────────────────────────────┘
```

## Quick Start

### 1. Generate Golden Reference Test Vectors

```bash
cd /path/to/ai_accelerator

# Generate test vectors for 4x4 systolic array with 2 tiles
python3 scripts/golden_ref.py \
    --rows 4 \
    --cols 4 \
    --num-tiles 2 \
    --output-dir sim \
    --seed 42
```

Output files in `sim/`:
- `wgt_in.hex` - Weight stimulus (hex format, 32-bit values)
- `act_in.hex` - Activation stimulus (hex format, 32-bit values)  
- `expected_out.hex` - Expected outputs (hex format, 32-bit values)

### 2. Run Simulation

#### Using Verilator (recommended - open source)

```bash
# Compile
verilator --trace -cc \
    -I./src \
    -f ./src/flist.f \
    ./src/tb/tb_top_int.sv \
    --top-module tb_top_int

# Build
cd obj_dir && make -j && cd ..

# Run
./obj_dir/Vtb_top_int +wgt_file=sim/wgt_in.hex \
                      +act_file=sim/act_in.hex \
                      +out_file=sim/expected_out.hex
```

#### Using VCS

```bash
vcs -full64 -sverilog \
    -I./src \
    -f ./src/flist.f \
    ./src/tb/tb_top_int.sv \
    -top tb_top_int \
    +wdb

./simv +wgt_file=sim/wgt_in.hex \
       +act_file=sim/act_in.hex \
       +out_file=sim/expected_out.hex
```

#### Using QuestaSim

```bash
# Compile
vlib work
vlog -incdir ./src -f ./src/flist.f ./src/tb/tb_top_int.sv

# Simulate
vsim -c work.tb_top_int -do "run -all; quit" \
    -g wgt_file=sim/wgt_in.hex \
    -g act_file=sim/act_in.hex \
    -g out_file=sim/expected_out.hex
```

### 3. View Results

The testbench will output:

```
╔════════════════════════════════════════════════════════╗
║       AI Accelerator Top-Level Testbench               ║
╚════════════════════════════════════════════════════════╝

[0 ns] Reset released

┌─ Test 1: Control Signal Check ─────────────────────┐
PASS: busy should be 0 after reset
PASS: error should be 0 after reset
PASS: error_code should be 0 after reset
└──────────────────────────────────────────────────┘

[... simulation continues ...]

╔════════════════════════════════════════════════════════╗
║                    TEST SUMMARY                        ║
║────────────────────────────────────────────────────────║
║  PASSED: 12
║  FAILED: 0
║  ✓ ALL TESTS PASSED
╚════════════════════════════════════════════════════════╝
```

View waveform:
```bash
gtkwave tb_top_int.vcd
```

## Test Structure

### Golden Reference Model (Python)

Located in: `scripts/golden_ref.py`

The reference model implements:
- **Quantization**: Input quantization matching `quant.sv`
- **Systolic Array**: Matrix multiplication matching `systolic_array.sv`
- **Post-Processing**: Scale, bias, activation matching `post_process.sv`

```python
ref = AcceleratorReference(rows=4, cols=4)
output, acc = ref.forward(
    x_float,           # Input activations
    w_float,           # Weights  
    bias_float,        # Bias values
    inv_scale,         # Quantization inverse scale
    scale_mult,        # Post-process scale
    act_type='relu'    # Activation type
)
```

### Testbench (SystemVerilog)

Located in: `src/tb/tb_top_int.sv`

The testbench performs:

1. **Initialization** - Reset and configuration
2. **Stimulus** - Stream weights and activations via AXI slaves
3. **Execution** - Start computation and wait for results
4. **Collection** - Capture output streams
5. **Verification** - Compare against golden reference
6. **Reporting** - Pass/fail summary

#### Key Test Cases

```verilog
// Test 1: Control signal checks
check_bit("busy should be 0 after reset", busy, 1'b0);

// Test 2: Data streaming
// Fork weight and activation streams in parallel

// Test 3: Output collection  
// Wait for busy signal and collect outputs

// Test 4: Golden reference comparison
for (int i = 0; i < output_idx; i++) begin
    check($sformatf("output[%0d]", i), 
          dut_output[i], 
          expected_out[i]);
end

// Test 5: Performance metrics
check_bit("perf_timeout_count should be 0", perf_timeout_count, 32'd0);
```

## Configuration Parameters

The testbench is configured via `pkg.sv`:

```verilog
ROWS         = 4              // Output rows
COLS         = 4              // Weight columns  
WGT_WIDTH    = 8 bits        // Weight bit-width
ACT_WIDTH    = 8 bits        // Activation bit-width
ACC_WIDTH    = 32 bits       // Accumulator bit-width
SCALE_WIDTH  = 16 bits       // Scale factor bit-width
```

All parameters are automatically synchronized between:
- `pkg.sv` (RTL parameters)
- `golden_ref.py` (Python reference)
- `tb_top_int.sv` (Testbench)

## Hex File Format

Test vectors are stored in hexadecimal format compatible with Verilog `$readmemh()`:

**wgt_in.hex** (32-bit, COLS=4 weights packed):
```
000A0B0C0D    // weight[0:3] as 8-bit values packed into 32 bits
...
```

**act_in.hex** (32-bit, ROWS=4 activations packed):
```
01020304      // activation[0:3] as 8-bit values packed into 32 bits
...
```

**expected_out.hex** (32-bit, COLS=4 outputs packed):
```
10111213      // output[0:3] as 8-bit values packed into 32 bits
...
```

Bit packing (little-endian):
```
packed = output[0] | (output[1] << 8) | (output[2] << 16) | (output[3] << 24)
```

## Debugging

### Waveform Analysis

```bash
# Generate and view waveform
gtkwave tb_top_int.vcd

# Search for signals in waveform viewer:
# - axi_slave weight/activation interfaces
# - systolic_array acc_out and overflow signals
# - post_process output and saturation flags
# - output serializer row counter and multiplexer
# - FSM state transitions
```

### Verbose Output

Enable more detailed logging by modifying `tb_top_int.sv`:

```verilog
if (args.verbose) begin
    $display("Weight[%0d] = 0x%08x", i, s_wgt_tdata);
    $display("Activation[%0d] = 0x%08x", i, s_act_tdata);
    $display("Output[%0d] = 0x%08x", i, m_out_tdata);
end
```

### Mismatch Analysis

When a test fails:

1. Check the output in the waveform at the failing cycle
2. Compare with expected value from `expected_out.hex`
3. Trace back through pipeline stages:
   - Quantizer output (`act_q2sram_data`)
   - Systolic array accumulator (`acc_out_arr`)
   - Post-processor output (`pp_data_out`)
   - Output serializer (`out_buf`)

## Extending Tests

### Add More Test Cases

Modify `golden_ref.py` to generate specific test patterns:

```python
# Example: All-ones test
weights = np.ones((ROWS, COLS), dtype=np.int8)
activations = np.ones(ROWS, dtype=np.int8)

# Example: Worst-case saturation
weights = np.full((ROWS, COLS), Q_MAX, dtype=np.int8)
activations = np.full(ROWS, Q_MAX, dtype=np.int8)

# Example: Negative values
weights = np.full((ROWS, COLS), -64, dtype=np.int8)
activations = np.full(ROWS, 64, dtype=np.int8)
```

### Test Different Activation Functions

```bash
# Test with GELU activation
python3 scripts/golden_ref.py --activation gelu ...

# Test with ReLU (default)
python3 scripts/golden_ref.py --activation relu ...

# Test with linear (identity)
python3 scripts/golden_ref.py --activation linear ...
```

## Performance Metrics

The testbench collects performance counters:

```
Total cycles:       <number of cycles for full computation>
Compute cycles:     <cycles spent in systolic array compute>
Stall cycles:       <cycles waiting for data or ready signals>
Weight load cycles: <cycles for weight streaming>
Drain cycles:       <cycles for output streaming>
Tile count:         <number of tiles processed>
Overflow count:     <number of overflows detected>
Timeout count:      <number of timeout errors>
```

Analyze to optimize:
- **High stall cycles** → Input/output bandwidth issues
- **High drain cycles** → Output bottleneck
- **Overflow count > 0** → Need larger accumulator or different scaling
- **Timeout count > 0** → Configuration or bug issues

## Troubleshooting

### Simulation Hangs

- Check `cfg_timeout` configuration
- Verify `s_act_tready` is asserted (quantizer should never stall)
- Check if `start` signal is properly pulsed

### Output Mismatch

1. Verify test vector files are correctly formatted (hex)
2. Check configuration parameters match `pkg.sv`
3. Verify quantization parameters (`cfg_inv_scale`, `cfg_scale_mult`)
4. Compare intermediate signals in waveform

### Compilation Errors

- Ensure all source files are in file list (`src/flist.f`)
- Check `import pkg::*` is at top of all modules
- Verify SystemVerilog version compatibility (use `-sv` flag)

## References

- SystemVerilog Testbench: [src/tb/tb_top_int.sv](../src/tb/tb_top_int.sv)
- Golden Reference: [scripts/golden_ref.py](../scripts/golden_ref.py)
- Top Module: [src/top_int.sv](../src/top_int.sv)
- Package: [src/pkg.sv](../src/pkg.sv)
