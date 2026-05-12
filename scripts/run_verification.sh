#!/bin/bash
# Comprehensive AI Accelerator Verification Flow
# This script generates golden reference vectors and runs the testbench

set -e  # Exit on error

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TESTBENCH_DIR="$PROJECT_ROOT/src/tb"
SCRIPTS_DIR="$PROJECT_ROOT/scripts"
SIM_DIR="$PROJECT_ROOT/sim"

# Create simulation directory
mkdir -p "$SIM_DIR"
cd "$SIM_DIR"

echo "╔════════════════════════════════════════════════════════╗"
echo "║   AI Accelerator Verification Flow                     ║"
echo "╚════════════════════════════════════════════════════════╝"
echo ""

# ── Step 1: Generate golden reference vectors ──────────────────────────────
echo "[1/3] Generating golden reference vectors..."
python3 "$SCRIPTS_DIR/golden_ref.py" \
    --rows 4 \
    --cols 4 \
    --num-tiles 2 \
    --output-dir "$SIM_DIR" \
    --seed 42

echo ""

# ── Step 2: Compile and run testbench ──────────────────────────────────────
echo "[2/3] Compiling and running testbench..."

# Using Verilator (preferred for SystemVerilog support)
if command -v verilator &> /dev/null; then
    echo "  Using Verilator..."
    
    verilator --trace --binary -Wall \
        -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
        -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-PINCONNECTEMPTY \
        -Wno-VARHIDDEN -Wno-BLKSEQ -Wno-INITIALDLY -Wno-EOFNEWLINE \
        -I"$PROJECT_ROOT/src" \
        "$PROJECT_ROOT/src/pkg.sv" \
        "$PROJECT_ROOT/src/axi_slave.sv" \
        "$PROJECT_ROOT/src/axi_master.sv" \
        "$PROJECT_ROOT/src/quant.sv" \
        "$PROJECT_ROOT/src/sram_controller.sv" \
        "$PROJECT_ROOT/src/mac_unit.sv" \
        "$PROJECT_ROOT/src/systolic_array.sv" \
        "$PROJECT_ROOT/src/post_process.sv" \
        "$PROJECT_ROOT/src/fsm_controller.sv" \
        "$PROJECT_ROOT/src/top_int.sv" \
        "$TESTBENCH_DIR/tb_top_int.sv" \
        --top-module tb_top_int \
        --build -j 4
        
    cd "$SIM_DIR"
    ./obj_dir/Vtb_top_int +wgt_file=wgt_in.hex +act_file=act_in.hex +out_file=expected_out.hex
    
    echo "  ✓ Simulation complete (using Verilator)"

# Fallback to Icarus Verilog (limited SystemVerilog support)
elif command -v iverilog &> /dev/null; then
    echo "  Using Icarus Verilog (note: limited SystemVerilog support)..."
    
    echo "  ERROR: Icarus Verilog does not support all SystemVerilog features used"
    echo "  Please install Verilator: sudo apt install verilator"
    exit 1

else
    echo "ERROR: No Verilog simulator found!"
    echo "  Please install: verilator"
    echo "  Ubuntu: sudo apt install verilator"
    echo "  MacOS: brew install verilator"
    exit 1
fi

# ── Step 3: Report results ─────────────────────────────────────────────────
echo "[3/3] Verification Summary"
echo ""

if [ -f "$SIM_DIR/tb_top_int.vcd" ]; then
    echo "  ✓ Waveform file generated: tb_top_int.vcd"
    echo "    (Open with: cd $SIM_DIR && gtkwave tb_top_int.vcd)"
fi

echo ""
echo "✓ Verification flow complete!"
echo ""
echo "Generated files in: $SIM_DIR"
echo "  - wgt_in.hex       (weight stimulus)"
echo "  - act_in.hex       (activation stimulus)"
echo "  - expected_out.hex (golden reference)"
echo "  - tb_top_int.vcd   (waveform trace - if generated)"
echo "  - tb_top_int.vvp   (compiled testbench - if using Icarus)"
echo ""
