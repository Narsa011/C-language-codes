#include <stdio.h>

int main() {
    int num, num1;

    printf("\nEnter your starting number: ");
    scanf("%d", &num);

    printf("\nEnter your last number: ");
    scanf("%d", &num1);

    printf("\nAscending order from %d to %d:\n", num, num1);
    for (int i = num; i <= num1; i++) {
        printf("%d ", i);
    }

    printf("\n\nDescending order from %d to %d:\n", num1, num);
    for (int j = num1; j >= num; j--) {
        printf("%d", j);
    }

    return 0;
}
