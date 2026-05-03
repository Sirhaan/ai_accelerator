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
/=================================================================================================================\
--- mac_unit simple test ---
PASS mac 3*4 accumulated              value=12
PASS mac overflow clear               value=0
PASS mac act piped                    value=3
PASS mac wgt piped                    value=4
PASS mac clear_acc                    value=0

--- quant simple test ---
PASS quant identity                   value=25
PASS quant no clip                    value=0
PASS quant positive clip              value=127
PASS quant positive clip flag         value=1
PASS quant negative clip              value=-127
PASS quant negative clip flag         value=1

--- post_process simple test ---
PASS post_process out_valid           value=1
PASS post_process linear col0         value=9
PASS post_process linear col1         value=11
PASS post_process linear col2         value=13
PASS post_process linear col3         value=15
PASS post_process no saturation       value=0
PASS post_process relu valid          value=1
PASS post_process relu clamps neg     value=0
PASS post_process saturation col1     value=127
PASS post_process saturation col2     value=127
PASS post_process saturation col3     value=127
PASS post_process saturation flag     value=1

--- systolic_array simple test ---
PASS systolic wgt_loaded pulse reached bottom value=1
FAIL systolic acc r0 c0               got=0 expected=7
FAIL systolic acc r0 c1               got=0 expected=6
FAIL systolic acc r0 c2               got=0 expected=5
FAIL systolic acc r0 c3               got=0 expected=4
FAIL systolic acc r1 c0               got=0 expected=14
FAIL systolic acc r1 c1               got=0 expected=12
FAIL systolic acc r1 c2               got=0 expected=10
FAIL systolic acc r1 c3               got=0 expected=8
FAIL systolic acc r2 c0               got=0 expected=21
FAIL systolic acc r2 c1               got=0 expected=18
FAIL systolic acc r2 c2               got=0 expected=15
FAIL systolic acc r2 c3               got=0 expected=12
FAIL systolic acc r3 c0               got=0 expected=28
FAIL systolic acc r3 c1               got=0 expected=24
FAIL systolic acc r3 c2               got=0 expected=20
FAIL systolic acc r3 c3               got=0 expected=16

TESTS FAILED: 16 error(s)
