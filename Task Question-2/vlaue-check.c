#include <stdio.h>

int main() {
    int number;
    printf("\nEnter a number: ");
    scanf("%d",&number);

    if(number>= 0 && number<=9)
    {
        printf("Number of digits = 1");
    }
    else if (number>= 10 && number<=99)
    {
        printf("Number of digits = 2");
    }
    else if (number>= 100 && number<=999)
    {
        printf("Number of digits = 3");
    }
    else if (number>= 1000 && number<=9999)
    {
        printf("Number of digits = 4");
    }
    else if (number>= 10000 && number<=99999)
    {
        printf("Number of digits = 5");
    }
    else if (number>= 100000 && number<=999999)
    {
        printf("Number of digits = 6");
    }
    else if (number>= 1000000 && number<=9999999)
    {
        printf("Number of digits = 7");
    }
    else if (number>= 10000000 && number<=99999999)
    {
        printf("Number of digits = 8");
    }
    else if (number>= 100000000 && number<=999999999)
    {
        printf("Number of digits = 9");
    }
    else if (number>= 1000000000)
    {
        printf("Number of digits = 10");
    }
    else
    {
      printf("Invalid input, Please enter 1 to 10 digits of number");
    }
    return 0;
}
