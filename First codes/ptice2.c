#include <stdio.h>

int main() {

    int number;
    printf("Math code no.1, Science code no.2, other sub code no.3");
    printf("\nEnter your subject type number: ");

    scanf("%d", &number);

    if (number == 1) {
        printf("\nCongrats! You win $25");
    } else if (number == 2) {
        printf("\nCongrats! You win $12");
    } else if (number == 3) {
        printf("\nSorry, gift only available for Math & Science subjects only");
    } else {
        printf("\nInvalid input");
    }

    return 0;
}
