#include <stdio.h>

void main()
{
  int i, sum = 0, x;

  printf("\n Enter your number --> ");
  scanf("%d", &i);

  x = i;

  while (i > 0)
  {
    sum = sum + (i % 10) * (i % 10) * (i % 10);
    i = i / 10;
  }

  if (sum == x)
  {
    printf("\n You enter %d number is Armstrong.",sum);
  }

  else
  {
    printf("\n You enter %d number is Not Armstrong",sum);
  }

  return 0;
}