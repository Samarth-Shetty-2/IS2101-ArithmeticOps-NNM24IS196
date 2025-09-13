#include <stdio.h>
#include <stdint.h>

void print_bin(unsigned int x, int bits) {
    for (int i = bits - 1; i >= 0; --i)
        putchar((x >> i) & 1 ? '1' : '0');
}

int main(void) {
    unsigned int dividend, divisor;
    printf("Enter dividend and divisor (positive integers): ");
    scanf("%u %u", &dividend, &divisor);

    int n = 8; // bit width
    unsigned int A = 0, Q = dividend, M = divisor;

    printf("\nInitial: A="); print_bin(A, n);
    printf(" Q="); print_bin(Q, n); printf("\n");

    for (int i = 0; i < n; i++) {
        A = (A << 1) | (Q >> (n-1));
        Q = (Q << 1) & ((1 << n) - 1);
        A = A - M;

        if ((int)A < 0) {
            A = A + M;
            // Q0 = 0 (already)
        } else {
            Q |= 1;
        }

        printf("Step %d: A=", i+1); print_bin(A, n);
        printf(" Q="); print_bin(Q, n); printf("\n");
    }

    printf("\nQuotient = %u, Remainder = %u\n", Q, A);
    return 0;
}
