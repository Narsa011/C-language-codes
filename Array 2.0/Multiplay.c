#include <stdio.h>

int main()
{
  int a[3][3], i, j;
  int b[3][3];
  
  printf("\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }
  printf("\nFirst matrix is -\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter value for a[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
    printf("\n");
  }
  printf("\nSecond matrix is - :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
  printf("\nAfter multiplicaton -\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %d", a[i][j] * b[i][j]);
    }
    printf("\n");
  }
  return 0;
}
