#include <stdio.h>

void main()
{
  int n, count = 0, i;

  printf("\n Enter your number : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
    if (count == 2)
    {
      printf(" %d is Prime Number",n);
    }
    else
    {
      printf(" %d is Not prime number",n);
    }

  return 0;
}