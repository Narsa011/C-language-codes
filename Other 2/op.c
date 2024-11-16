#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    if (a > 5 || b < 15) {
        printf("At least one condition is true.\n");
    } else {
        printf("Both conditions are false.\n");
    }

    return 0;
}
