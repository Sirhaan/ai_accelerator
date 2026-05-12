#!/bin/bash
# Comprehensive AI Accelerator Verification Flow
# This script generates golden reference vectors and runs the testbench

set -e  # Exit on error

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$SCRIPT_DIR/.."
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

# ── Step 2: Compile testbench ──────────────────────────────────────────────
echo "[2/3] Compiling testbench..."

# Using Verilator (preferred for open-source)
if command -v verilator &> /dev/null; then
    echo "  Using Verilator"
    verilator --trace -cc \
        -I"$PROJECT_ROOT/src" \
        -f "$PROJECT_ROOT/scripts/flist.f" \
        "$TESTBENCH_DIR/tb_top_int.sv" \
        --top-module tb_top_int \
        --exe test.cpp
        
    cd obj_dir
    make -j
    ./Vtb_top_int
    cd ..
    echo "  ✓ Simulation complete (using Verilator)"

# Or using VCS (if available)
elif command -v vcs &> /dev/null; then
    echo "  Using VCS"
    vcs -full64 -sverilog \
        -I"$PROJECT_ROOT/src" \
        -f "$PROJECT_ROOT/src/flist.f" \
        "$TESTBENCH_DIR/tb_top_int.sv" \
        -top tb_top_int \
        +wdb \
        +wdb_dir=dump
        
    ./simv +wdb_dir=dump
    echo "  ✓ Simulation complete (using VCS)"

# Or using QuestaSim/ModelSim (if available)
elif command -v vlib &> /dev/null; then
    echo "  Using QuestaSim"
    vlib work
    vmap work work
    
    vlog -incdir "$PROJECT_ROOT/src" \
        -f "$PROJECT_ROOT/src/flist.f" \
        "$TESTBENCH_DIR/tb_top_int.sv"
    
    vsim -c -do "
        run -all
        quit
    " work.tb_top_int
    
    echo "  ✓ Simulation complete (using QuestaSim)"

else
    echo "ERROR: No Verilog simulator found!"
    echo "  Please install one of: Verilator, VCS, or QuestaSim"
    exit 1
fi

echo ""

# ── Step 3: Report results ─────────────────────────────────────────────────
echo "[3/3] Verification Summary"
echo ""

if [ -f "tb_top_int.vcd" ]; then
    echo "  ✓ Waveform file generated: tb_top_int.vcd"
    echo "    (Open with: gtkwave tb_top_int.vcd)"
fi

echo ""
echo "✓ Verification flow complete!"
echo ""
echo "Generated files in: $SIM_DIR"
echo "  - wgt_in.hex       (weight stimulus)"
echo "  - act_in.hex       (activation stimulus)"
echo "  - expected_out.hex (golden reference)"
echo "  - tb_top_int.vcd   (waveform trace)"
echo ""
