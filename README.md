Example: acc result maps to x_real = 1.375 in output units

stage2_biased = 1.375 × 2^15 = 45056  (in Q1.15)

win_offset    = 45056 + 131072 = 176128

Binary:  176128 = 0b 10_1011_0000_0000_0000
                       ↑↑↑↑↑↑↑↑↑↑
                    bits[17:8] = 10'b1010110000
                               = 688 decimal

lut_idx = 688

LUT lookup: gelu_lut[688] = round(GeLU(688/128 - 4))
                           = round(GeLU(1.375))
                           = round(1.332)
                           = 1  ✓