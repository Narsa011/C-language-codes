#include <stdio.h>

void main()
{
  int i;

  for (i = 1; i <= 10; i++)
  {
    printf("\n Enter your %d number : ", i);
    scanf("%d", &i);
    printf(" %d square %d\n", i, i * i);
  }

  return 0;
}