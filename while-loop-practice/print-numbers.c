#include <stdio.h>

int main() {
    int i;
    printf("\nEnter your number: ");
    scanf("%d", &i);

    while (i >= 1) {
        printf("\n%d", i);
        i--;
    }

    return 0;
}
