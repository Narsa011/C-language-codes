#include <stdio.h>

int main() {
    int a[1], b[1], i;

    // Input loop for array `a`
    for (i = 0; i < 1; i++) {
        printf("\n Enter your number: ");
        scanf("%d", &a[i]);
    }

    // Copy elements from `a` to `b`
    for (i = 0; i < 1; i++) {
        b[i] = a[i];
    }

    // Print elements of array `b`
    printf("\nElements in array b are: ");
    for (i = 0; i < 1; i++) {
        printf("%d ", b[i]);
    }

    switch (b[i])
    {
    case 1:
      printf("\nYour name is arvind");
      printf("\nMobile No. 8306766336");
      printf("\nPost - siwada");
      printf("\nPin code - 343041");

      break;
    
    default:
      break;
    }

    return 0;
}
