#include <stdio.h>

void main()
{
  char oprator;
  int num1, num2, result;

  printf("\n Enter your oprator (+,-,*,/) : ");
  scanf("%c", &oprator);

  printf("\n Enter your first number : ");
  scanf("%d", &num1);

  printf("\n Enter your srcond number : ");
  scanf("%d", &num2);

  switch (oprator)
  {
  case '+':
    result = num1 + num2;
    printf("\n%d + %d = %d", num1, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("\n%d - %d = %d", num1, num2, result);
    break;
  case '*':
    result = num1 * num2;
    printf("\n%d * %d = %d", num1, num2, result);
    break;
  case '/':
    if (num2 != 0)
    {
      result = num1 / num2;
      printf("%d / %d = %d", num1, num2, result);
    }
    else
    {
      printf("\nWarning! division by 0 not allowed");
    }

    break;

  default:
    printf("\n Input invalid!");
    break;
  }
  return 0;
}

// Ager double datatype ka use karna ho toh kar sakthe h number of high values ka leya..