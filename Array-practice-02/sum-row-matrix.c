#include <stdio.h>

int main()
{
  int a[3][3], i, j, sum = 0;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter your number a[%d][%d] : ", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < 3; i++)
  {
    sum = 0;
    for (j = 0; j < 3; j++)
    {
      sum = sum + a[i][j];
    }
    printf("%d", sum);
    printf("\n");
  }
  return 0;
}