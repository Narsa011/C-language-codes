#include <stdio.h>

int main() {
    unsigned long bytes;
    unsigned long long bits;

    printf("Enter the value in bytes: ");
    scanf("%lu", &bytes);

    bits =bytes * 8;

    printf("%lu bytes = %llu bits.\n", bytes, bits);

    return 0;
}
