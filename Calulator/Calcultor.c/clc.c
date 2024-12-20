#include <stdio.h>

int main()
{
  double num1 = 0, num2 = 0, result = 0;
  char oprator;

  printf("\n Calulator");

  printf("\nEnter your first number : ");
  scanf("%lf", &num1);

  printf("\nEnter your oprator (+,-,*,/) : ");
  scanf("%s", &oprator);

  printf("\nEnter your second number : ");
  scanf("%lf", &num2);

  switch (oprator)
  {
  case '+':
    result = num1 + num2;
    printf("\n%.2lf + %.2lf = %.2lf", num1, num2, result);
    break;

  case '-':
    result = num1 - num2;
    printf("\n%.2lf - %.2lf = %.2lf", num1, num2, result);
    break;

  case '*':
    result = num1 * num2;
    printf("\n%.2lf * %.2lf = %.2lf", num1, num2, result);
    break;

  case '/':
    if (num2 != 0)
    {
      result = num1 / num2;
      printf("\n%.2lf / %.2lf = %.2lf", num1, num2, result);
    }
    else
    {
      printf("\nZero is not divisable for number");
    }
    break;

  default:
    printf("\n Invalid oprator");
    break;
  }
  return 0;
}