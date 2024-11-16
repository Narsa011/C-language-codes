#include <stdio.h>

int main()
{
  int a[3][3], i, j, sum;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter your value a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }

  printf("Matrix:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\nSum matrix\n");
  for (i = 0; i < 3; i++)
  {
    sum = 0;
    for (j = 0; j < 3; j++)
    {
      sum = sum + a[i][j];
    }
    printf("Sum of row %d: %d\n", i + 1, sum);
  }

  return 0;
}
