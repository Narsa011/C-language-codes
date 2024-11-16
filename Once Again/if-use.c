#include <stdio.h>

int main() {
    int num;
    printf("\nEnter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Entered number is Even\n");
    } else if (num % 2 != 0) {  // Using "not equal to" in the correct form
        printf("Entered number is Odd\n");
    }
    else
    {
      printf(" Warning! Enter currect form please...");
    }

    return 0;
}
