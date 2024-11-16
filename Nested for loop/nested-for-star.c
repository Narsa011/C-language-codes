#include <stdio.h>

void main() {
    int a, b ,k;

    for (a = 1; a <= 5; a++) {


        for (b = 1; b <= a; b++) {
          k=b-1;
            printf("%c", 'A' + k);
        }

        printf("\n");
    }
}
