import numpy as np
import math

def compute_gelu_lut(n_entries=1024, window=4.0):
    """
    Maps 10-bit index → int8 GELU output.
    Index 0    = x_real = -4.0
    Index 512  = x_real =  0.0
    Index 1023 = x_real = +3.992 (≈ +4.0)
    Step size  = 8.0 / 1024 = 1/128
    """
    lut = []
    for i in range(n_entries):
        # Recover real value from index
        # Each step = 1/128 (matches bit-slice resolution)
        x = i / 128.0 - window          # [-4.0, +4.0)

        # Exact GeLU
        gelu_x = x * 0.5 * (1.0 + math.erf(x / math.sqrt(2)))

        # Quantize output to int8 (same domain as input — output units)
        q_out = int(np.clip(round(gelu_x), -127, 127))
        lut.append(q_out & 0xFF)        # store as unsigned byte

    with open("gelu_lut.hex", "w") as f:
        for val in lut:
            f.write(f"{val:02x}\n")

    return lut

compute_gelu_lut()