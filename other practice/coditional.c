#include <stdio.h>

int main() {
    int a;
    char result;
    printf("\n Enter your number: ");
    scanf("%d", &a);

  result = (a % 2 == 0);

    printf("\n %d is %s\n", a, result ? "Even" : "Odd");
    
    return 0;
}
