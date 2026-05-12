# AI Accelerator Verification

This repository contains a top-level AI accelerator design and a complete verification flow.

## Overview

The design under test is `src/top_int.sv`, which integrates:

- Weight input AXI slave
- Activation input AXI slave
- Quantization stage
- SRAM controller
- 4×4 systolic array compute
- Post-processing units
- Output AXI master
- Controller FSM and performance counters

## System Block Diagram

The top-level dataflow in `src/top_int.sv` is organized as follows:

```text
┌──────────────────────────────────────────────────────────┐
│                  controller_fsm                          │
│  S_IDLE→S_WAIT_BUFFERS→S_LOAD_WEIGHTS→S_COMPUTE→        │
│  S_DRAIN→S_IC_ADVANCE→S_REQUANT→S_OUTPUT→S_TILE_ADVANCE │
│  + watchdog + 8 perf counters + error recovery           │
└──┬──────┬───────┬────────┬────────┬───────┬─────────────┘
   │      │       │        │        │       │
enable  clear  wgt_    wgt_   act_   acc_    act_type
   │  acc   load    rd_     rd_    valid   scale_mult
   │      │  start  next    next    │       │
   │      │       │        │        │       │
Weights│      │       │        │        │       │
(AXI4-Stream)          │      │       │        │       │
     │                 │      │       │        │       │
     ▼                 │      │       │        │       │
┌──────────┐           │      │       │        │        │
│axis_slave│           │      │       │        │        │
│(weight)  │           │      │       │        │        │
└────┬─────┘           │      │       │        │        │
     │ out_valid/data   │      │       │        │        │
     ▼                 │      │       │        │        │
┌──────────────────────────────────────┐        │        │       │
│           sram_controller            │        │        │       │
│                                      │        │        │       │
│  ┌──────────────┐ ┌──────────────┐   │◄───────┘        │       │
│  │ weight bank A│ │ weight bank B│   │ wgt_rd_next     │       │
│  │  (active)    │ │ (prefetch)   │   │                 │       │
│  └──────────────┘ └──────────────┘   │                 │       │
│                                      │                 │       │
│  ┌──────────────────────────────┐    │◄────────────────┘       │
│  │    activation SRAM           │    │ act_rd_next/rst         │
│  └──────────────────────────────┘    │                         │
└───────┬──────────────────────────────┘                         │
        │ wgt_rd_data [COLS×8]                                   │
        │ act_rd_data [ROWS×8]                                   │
        ▼                                                        │
┌───────────────────┐                                           │
│  systolic_array   │◄─────────────────────────────────────────┘
│                   │  enable, clear_acc, wgt_load_start
│  [PE][PE]...[PE]  │
│  [PE][PE]...[PE]  │
│  weight stationary│
│  preloaded via    │
│  shift register   │
└────────┬──────────┘
         │ acc_out [ROWS][COLS] int32
         │ any_overflow
         ▼
┌───────────────────────────────────────┐
│          post_process × ROWS          │
│                                       │
│  Stage 1: acc × scale_mult (Q1.15)    │◄── cfg_scale_mult
│  Stage 2: >>> shift + bias[col]       │◄── cfg_bias[COLS]
│  Stage 3: GeLU LUT or ReLU + sat±127 │◄── cfg_act_type
└────────────────┬──────────────────────┘
                 │ data_out [ROWS][COLS] int8
                 │ out_valid
                 ▼
         ┌──────────────┐
         │ output row   │  serializes ROWS rows
         │ mux + buffer │
         └──────┬───────┘
                │
                ▼
         ┌──────────────┐
         │ axis_master  │  registered TVALID/TDATA
         └──────┬───────┘  handles downstream backpressure
                │
                ▼
         Results (AXI4-Stream)
         COLS×8 bits per transfer
         ROWS transfers per tile

─────────────────────────────────
Activations (AXI4-Stream)
     │
     ▼
┌──────────┐
│axis_slave│  registered input buffer
│(act)     │
└────┬─────┘
     │
     ▼
┌──────────────────┐
│quantize_symmetric│  × ROWS instances parallel
│  (2 cycle lat)   │  int16 → int8
└────┬─────────────┘
     │ 2-cycle delayed valid/last
     ▼
sram_controller (act SRAM write side)

Note: the activation path is not backpressured by the quantizer; `tready_out` is tied high in `top_int.sv` and the write side of the activation SRAM always accepts data.
```

## Documentation

The repository also includes the following markdown guides:

- `QUICK_START.md` — quick usage guide
- `VERIFICATION.md` — detailed verification instructions
- `VERIFICATION_SUMMARY.md` — verification summary

## How to Run Verification

Use the helper script:

```bash
cd /home/sirhaan/projects/ai_accelerator
bash scripts/run_verification.sh
```

This will:

- generate golden reference vectors
- compile and run the testbench with Verilator
- produce `sim/wgt_in.hex`, `sim/act_in.hex`, `sim/expected_out.hex`
- generate `sim/tb_top_int.vcd`

## Key Files

- `src/top_int.sv` — top-level DUT
- `src/pkg.sv` — shared parameters
- `src/tb/tb_top_int.sv` — testbench
- `scripts/golden_ref.py` — golden reference generator
- `scripts/run_verification.sh` — verification driver

## Notes

The current README now includes a circuit dataflow diagram and documentation links for all project markdown files.
