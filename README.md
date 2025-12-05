# CRC Calculation Example in C

This repository contains an example implementation of the CRC (Cyclic Redundancy Check) algorithm in C. It consists of two files:

- `crc.c` — contains a universal CRC calculation function that supports customizable width, polynomial, initial value, XOR output, and input/output reflection flags;
- `main.c` — demonstrates how to use the `crc_compute` function from `crc.c` using the test string `"123456789"`.

## Algorithm Parameters

Parameters for most well-known CRC algorithms — including polynomial, `init`, `xorOut`, `refIn`, and `refOut` — can be found at:

[https://crccalc.com](https://crccalc.com)

## Example parameters in this repository: [CRC-32/ISO-HDLC](https://crccalc.com/?crc=123456789&method=CRC-32/ISO-HDLC&datatype=ascii&outtype=hex)

Expected CRC result for the string `"123456789"`: `0xCBF43926`

## Compilation

```bash
gcc -o crc_test main.c
./crc_test
```

## Limitations

- Requires a precomputed CRC table.
- Supports CRC sizes up to 32 bits.
- Does not support differing refIn and refOut flags (only cases where both are either true or false).
