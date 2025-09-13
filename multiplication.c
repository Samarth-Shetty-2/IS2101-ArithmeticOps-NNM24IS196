#include <stdio.h>
#include <stdint.h>
void print_binary(uint64_t x, int bits) {
    for (int i = bits - 1; i >= 0; --i) {
        putchar((x >> i) & 1 ? '1' : '0');
    }
}

int main(void) {
    int m, q;
    printf("Enter multiplicand and multiplier (signed integers): ");
    scanf("%d %d", &m, &q);
    const int n = 8;
    const uint64_t mask = (1ULL << n) - 1; 
    uint64_t A = 0;          
    uint64_t M = m & mask;  
    uint64_t Q = q & mask;  
    printf("\nInitial: A = ");
    print_binary(A, n);
    printf("  Q = ");
    print_binary(Q, n);
    printf("\n");
    for (int step = 0; step < n; ++step) {
        if (Q & 1) {
            A = (A + M) & mask;  
        }
        uint64_t combined = (A << n) | Q;
        combined >>= 1;
        A = (combined >> n) & mask;
        Q = combined & mask;
        printf("Step %2d: A = ", step + 1);
        print_binary(A, n);
        printf("  Q = ");
        print_binary(Q, n);
        printf("\n");
    }
    uint64_t product = (A << n) | Q;
    printf("\nProduct = %lld\n", (long long)((int64_t)product));

    return 0;
}
