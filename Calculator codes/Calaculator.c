#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Asking for input
    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("\nEnter Your first number : ");
    scanf("%lf",&num1);

    printf("\nEnter your srcond number : ");
    scanf("%lf",&num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nError! Invalid operator.\n");
    }

    return 0;
}
