#include <stdio.h>

int main()
{
  char operator;
  int num, num1, res;

  printf("\nEnter your operator (+, -, *, /, %%): ");
  scanf(" %c", &operator); // Added a space before %c to handle whitespace

  printf("\nEnter your first number: ");
  scanf("%d", &num);

  printf("\nEnter your second number: ");
  scanf("%d", &num1);

  switch (operator)
  {
  case '+':
    res = num + num1;
    printf(" %d + %d = %d\n", num, num1, res);
    break;

  case '-':
    res = num - num1;
    printf(" %d - %d = %d\n", num, num1, res);
    break;

  case '*':
    res = num * num1;
    printf(" %d * %d = %d\n", num, num1, res);
    break;

  case '%':
    if (num1 != 0)
    {
      res = num % num1;
      printf(" %d %% %d = %d\n", num, num1, res);
    }
    else
    {
      printf("Error: Division by zero is not allowed.\n");
    }
    break;

  case '/':
    if (num1 != 0)
    {
      res = num / num1;
      printf(" %d / %d = %d\n", num, num1, res);
    }
    else
    {
      printf("Error: Division by zero is not allowed.\n");
    }
    break;

  default:
    printf("\nError! Invalid input...\n");
    break;
  }

  return 0;
}
