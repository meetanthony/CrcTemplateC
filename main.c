#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "crc.c"

int main() {
    const uint8_t data[] = "123456789";

    uint32_t result = crc_compute(data, sizeof(data) - 1);
    printf("CRC = 0x%08X\n", result);
    return 0;
}
