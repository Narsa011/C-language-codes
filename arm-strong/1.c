#include <stdio.h>

void main()
{
  int i, num, num1, res = 0, rem;

  printf("\n Enter your number : ");
  scanf("%d", &num);

  num1 = num;

  for (i = 1; num != 0; i++)
  {
    rem = num % 10;
    res = res * 10 + rem;
    num = num / 10;
  }
  if (res == num1)
  {
    printf("Yes ! enterd number is plaidrom.\n");
  }
  else
  {
    printf("Enterd number is not palidrom.\n");
  }

  return 0;
}