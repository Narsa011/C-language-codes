#include <stdio.h>

int main()
{
  int a[3][3] = {{3, 4, 5}, {6, 7, 8}, {9, 2, 7}};
  int i, j;
printf("\nBefore transpose\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }

  printf("\nAfter transpose\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %d", a[j][i]);
    }
    printf("\n");
  }

  return 0;
}