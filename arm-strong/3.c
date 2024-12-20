#include <stdio.h>

void main()
{
  int num, sum = 0, x;

  printf("\n Enter your number : ");
  scanf("%d", &num);

  x = num;

  while (num > 0)
  {
    sum = sum + (num % 10) * (num % 10) * (num % 10);
    num = num / 10;
  }
  if (sum == x)
  {
    printf("\n Enterd number is armstrong.");
  }
  else
  {
    printf("Enterd number is not armstrong.");
  }

  return 0;
}