#include <stdio.h>
// && || ! : for expressions.
// Bitwise Operator: operators for bits.

int main(void)
{
    short a = 0x6eb9; // 4 bytes = 32 bits
    short b = 0x5d27;
    char c = 10;             // 1010 -> 0010
    printf("0x%x\n", a & b); // AND
    printf("0x%x\n", a | b); // OR
    printf("0x%x\n", ~a);    // NOT
    printf("0x%x\n", a ^ b); // XOR only true when different

    printf("%d\n", c >> 2); // R-SHIFT
    char d = 10;            // 0010 1000
    printf("%d\n", d << 2); // L-SHIFT

    return 0;
}