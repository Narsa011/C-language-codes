#include <stdio.h>

int main() {
    int num, i=1, j = 1;
    unsigned long long factorial=1;

    
            while (i <= 10) {
        printf("\nEnter number %d to calculate its factorial: ", j);
        scanf("%d", &num);
                factorial *= i;
                i++;
            }


            printf("Factorial of %d = %llu\n", num, factorial);
        j++;
    

    return 0;
        }

