#include <stdio.h>

int fact(int num)
{
  int fact = 1;
  for (int i = num; i >= 1; i--)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  int num, result;

  printf("\nEnter your number: ");
  scanf("%d", &num);

  result = fact(num);

  printf("%d factorial is %d\n", num, result);

  return 0;
}
