#include <stdio.h>

int main() {
    float bytes;
    unsigned long bits;

    printf("Enter the value in bytes: ");
    scanf("%f", &bytes);

    bits = bytes* 1024;

    printf("%.1f bytes in %lu bits.\n", bytes, bits);

    return 0;
}
