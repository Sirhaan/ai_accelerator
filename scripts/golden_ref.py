#!/usr/bin/env python3
"""
Golden Reference Model for AI Accelerator Verification
Generates test vectors and expected outputs for testbench verification
Matches behavior of RTL systolic array pipeline
"""

import numpy as np
import argparse
from pathlib import Path


class AcceleratorReference:
    def __init__(self, rows=4, cols=4, act_width=8, acc_width=32, scale_frac=15):
        self.ROWS = rows
        self.COLS = cols
        self.ACT_WIDTH = act_width
        self.ACC_WIDTH = acc_width
        self.SCALE_FRAC = scale_frac
        self.Q_MAX = 127
        self.Q_MIN = -127

    # ── Input quantization ────────────────────────────────────────────────────
    def quantize(self, x, inv_scale):
        """Mirrors quantize_symmetric.sv — 2 cycle latency in RTL"""
        scaled = x * (inv_scale / 2**self.SCALE_FRAC)
        rounded = np.round(scaled).astype(np.int32)
        return np.clip(rounded, self.Q_MIN, self.Q_MAX).astype(np.int8)

    # ── Systolic array ────────────────────────────────────────────────────────
    def matmul(self, activations, weights):
        """
        Systolic array computation
        activations: [M × K] int8
        weights:     [K × N] int8
        returns:     [M × N] int32 accumulated result
        """
        return activations.astype(np.int32) @ weights.astype(np.int32)

    # ── Post-processing ───────────────────────────────────────────────────────
    def post_process(self, acc, scale_mult, bias, act_type="linear", shift=15):
        """Mirrors post_process.sv — 3 cycle latency in RTL"""
        # Stage 1: multiply by scale
        scaled = acc * (scale_mult / 2**shift)

        # Stage 2: add bias (at full precision)
        biased = scaled + bias

        # Stage 3: activation
        if act_type == "relu":
            activated = np.maximum(biased, 0)
        elif act_type == "gelu":
            # Approximate GELU: 0.5 * x * (1 + tanh(sqrt(2/pi) * (x + 0.044715 * x^3)))
            activated = biased * 0.5 * (
                1.0
                + np.tanh(
                    np.sqrt(2 / np.pi)
                    * (biased + 0.044715 * biased**3)
                )
            )
        else:  # linear
            activated = biased

        # Saturate to int8
        return np.clip(np.round(activated), self.Q_MIN, self.Q_MAX).astype(
            np.int8
        )

    # ── Full layer forward pass ───────────────────────────────────────────────
    def forward(
        self, x_float, w_float, bias_float, inv_scale, scale_mult, act_type="relu"
    ):
        """
        Complete forward pass — generates expected RTL output
        """
        # Quantize inputs
        x_q = self.quantize(x_float, inv_scale)
        w_q = np.clip(np.round(w_float * 127), -127, 127).astype(np.int8)

        # Matrix multiply (systolic array)
        acc = self.matmul(x_q, w_q)

        # Post-process
        out = self.post_process(acc, scale_mult, bias_float, act_type)

        return out, acc

    # ── Packing functions for hex file output ─────────────────────────────────
    def pack_weight_row(self, wgt_row):
        """Pack weight row [COLS] into 32-bit value"""
        packed = 0
        for i in range(self.COLS):
            val = wgt_row[i] & 0xFF
            packed |= val << (i * self.ACT_WIDTH)
        return packed

    def pack_activation_row(self, act_row):
        """Pack activation row [ROWS] into 32-bit value"""
        packed = 0
        for i in range(self.ROWS):
            val = act_row[i] & 0xFF
            packed |= val << (i * self.ACT_WIDTH)
        return packed

    def pack_output_row(self, out_row):
        """Pack output row [COLS] into 32-bit value"""
        packed = 0
        for i in range(self.COLS):
            val = out_row[i] & 0xFF
            packed |= val << (i * self.ACT_WIDTH)
        return packed

    # ── Generate test vectors ─────────────────────────────────────────────────
    def generate_vectors(self, num_tiles=1, seed=42, output_dir="."):
        """
        Generate random test cases and write RTL stimulus files
        num_tiles: number of tile computations to generate
        """
        rng = np.random.default_rng(seed)

        wgt_hex = []
        act_hex = []
        out_hex = []

        print(f"Generating {num_tiles} test tile(s)...")

        for tile_idx in range(num_tiles):
            # Random inputs in reasonable range [ROWS × COLS] matrix
            # Weights: [K=ROWS × N=COLS]
            w = rng.integers(self.Q_MIN, self.Q_MAX + 1, (self.ROWS, self.COLS)).astype(
                np.int8
            )

            # Activations: [M=ROWS × K=ROWS]
            x = rng.integers(self.Q_MIN, self.Q_MAX + 1, (self.ROWS, self.ROWS)).astype(
                np.int8
            )

            # Bias [COLS]
            b = rng.integers(self.Q_MIN, self.Q_MAX + 1, self.COLS).astype(np.int8)

            # Calibration scales (fixed for now)
            inv_scale = int(1.0 * 2**self.SCALE_FRAC)  # 1.0 in Q15
            scale_mult = int(1.0 * 2**self.SCALE_FRAC)  # 1.0 in Q15

            # Compute expected output
            output, acc = self.forward(x, w, b, inv_scale, scale_mult, "relu")

            # Pack into hex format (by row)
            for row in range(self.ROWS):
                # Weight row [COLS]
                wgt_packed = self.pack_weight_row(w[row])
                wgt_hex.append(wgt_packed)

            # Activation rows (same for all ROWS outputs)
            for row in range(self.ROWS):
                act_packed = self.pack_activation_row(x[row])
                act_hex.append(act_packed)

            # Output rows
            for row in range(self.ROWS):
                out_packed = self.pack_output_row(output[row])
                out_hex.append(out_packed)

            if tile_idx == 0:
                print(f"  Tile 0: w[0,0:]=", w[0])
                print(f"  Tile 0: x[0,0:]=", x[0])
                print(f"  Tile 0: b[0:]=", b)
                print(f"  Tile 0: output[0,0:]=", output[0])

        # Write hex files
        output_path = Path(output_dir)
        output_path.mkdir(parents=True, exist_ok=True)

        self._write_hex_file(output_path / "wgt_in.hex", wgt_hex)
        self._write_hex_file(output_path / "act_in.hex", act_hex)
        self._write_hex_file(output_path / "expected_out.hex", out_hex)

        return wgt_hex, act_hex, out_hex

    def _write_hex_file(self, filepath, data_list):
        """Write data as hex file (Verilog $readmemh format)"""
        with open(filepath, "w") as f:
            for data in data_list:
                hex_str = f"{data:08X}"
                f.write(hex_str + "\n")
        print(f"✓ Wrote {len(data_list):4d} vectors to {filepath}")


def main():
    parser = argparse.ArgumentParser(
        description="Generate golden reference test vectors for AI accelerator"
    )
    parser.add_argument(
        "--rows", type=int, default=4, help="Number of rows (default=4)"
    )
    parser.add_argument(
        "--cols", type=int, default=4, help="Number of columns (default=4)"
    )
    parser.add_argument(
        "--num-tiles", type=int, default=2, help="Number of test tiles to generate"
    )
    parser.add_argument(
        "--output-dir", type=str, default=".", help="Output directory for hex files"
    )
    parser.add_argument("--seed", type=int, default=42, help="Random seed")

    args = parser.parse_args()

    print("╔════════════════════════════════════════════════════════╗")
    print("║  Golden Reference Generator for AI Accelerator         ║")
    print("╚════════════════════════════════════════════════════════╝")
    print(f"Configuration: ROWS={args.rows}, COLS={args.cols}")
    print()

    ref = AcceleratorReference(rows=args.rows, cols=args.cols)
    wgt, act, out = ref.generate_vectors(
        num_tiles=args.num_tiles, seed=args.seed, output_dir=args.output_dir
    )

    print()
    print("✓ Test vector generation complete!")
    print(f"  Output directory: {args.output_dir}")


if __name__ == "__main__":
    main()