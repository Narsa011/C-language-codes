#include <stdio.h>

int main()
{
  int a[3][3], i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }

  printf("\nmatrix:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\nAfter transpose:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[j][i]);
    }
    printf("\n");
  }

  return 0;
}
