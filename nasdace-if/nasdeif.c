#include <stdio.h>

int main() {
    int number;

    printf("\nEnter your number : ");
    scanf("%d", &number);

    if (number > 0) {
        printf("\nEntered number is Positive");

        if (number >= 0 && number <= 9) {
            printf("\nNumber of digits = 1");
        } else if (number >= 10 && number <= 99)
        {
            printf("\nNumber of digits = 2");
        } else if (number >= 100 && number <= 999)
        {
            printf("\nNumber of digits = 3");
        } else if (number >= 1000 && number <= 9999)
        {
            printf("\nNumber of digits = 4");
        } else if (number >= 10000 && number <= 99999)
        {
            printf("\nNumber of digits = 5");
        } else if (number >= 100000 && number <= 999999)
        {
            printf("\nNumber of digits = 6");
        } else if (number >= 1000000 && number <= 9999999)
        {
            printf("\nNumber of digits = 7");
        } else if (number >= 10000000 && number <= 99999999)
        {
            printf("\nNumber of digits = 8");
        } else if (number >= 100000000 && number <= 999999999)
        {
            printf("\nNumber of digits = 9");
        } else if (number >= 1000000000)
        {
            printf("\nNumber of digits = 10");
        }
    } 
    else if (number < 0){
        printf("\nEntered number is Negative");

        number = -number;

        if (number >= 0 && number <= 9)
        {
            printf("\nNumber of digits = 1");
        } else if (number >= 10 && number <= 99)
        {
            printf("\nNumber of digits = 2");
        } else if (number >= 100 && number <= 999)
        {
            printf("\nNumber of digits = 3");
        } else if (number >= 1000 && number <= 9999)
        {
            printf("\nNumber of digits = 4");
        } else if (number >= 10000 && number <= 99999)
        {
            printf("\nNumber of digits = 5");
        } else if (number >= 100000 && number <= 999999)
        {
            printf("\nNumber of digits = 6");
        } else if (number >= 1000000 && number <= 9999999)
        {
            printf("\nNumber of digits = 7");
        } else if (number >= 10000000 && number <= 99999999)
        {
            printf("\nNumber of digits = 8");
        } else if (number >= 100000000 && number <= 999999999)
        {
            printf("\nNumber of digits = 9");
        } else if (number >= 1000000000)
        {
            printf("\nNumber of digits = 10");
        }
    } else {
        printf("\nEntered number is Zero");
        printf("\nNumber of digits = 1");
    }

    return 0;
}
