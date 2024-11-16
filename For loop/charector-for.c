#include <stdio.h>

int main() {
    int i;

    printf("ASCII values and their corresponding characters:\n");
    for (i = 0; i <= 255; i++) {
        printf("%3d, Character: %c\n", i, i);
    }

    return 0;
}
