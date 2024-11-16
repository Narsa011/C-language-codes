#include <stdio.h>

void main()
{
  char opratoer;
  int num, num1, res;

  printf("Enter your oprator (+,-*,/) : ");
  scanf("%d", &opratoer);

  printf("Enter your first number : ");
  scanf("%d", &num);

  printf("Enter your second number : ");
  scanf("%d", &num1);

  switch (opratoer)
  {
  case '+':
    res = num + num1;
    printf(" %d + %d = %d", num, num1, res);
    break;

  case '-':
    res = num - num1;
    printf(" %d - %d = %d", num, num1, res);
    break;

  case '*':
    res = num * num1;
    printf(" %d X %d = %d", num, num1, res);
    break;

  case '/':

    if (num1 != 0)
    {
      res = num / num1;
      printf(" %d / %d = %d", num, num1, res);
    }
    else
    {
      printf("0 is not division by number.");
    }

    break;
  default:
    printf("\n Error! Invalid input...");
    break;
  }
  return 0;
}