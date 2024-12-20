#include <stdio.h>

int main()
{
  int a[3][3] = {{2, 6, 8}, {5, 8, 9}, {7, 9, 4}};
  int b[3][3] = {{4, 7, 8}, {6, 8, 9}, {0, 9, 3}};
  int j, i;

  for (i = 0; i < 3; i++)
  {

    for (j = 0; j < 3; j++)
    {
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < 3; i++)
  {

    for (j = 0; j < 3; j++)
    {
      printf(" %d", b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %d", a[i][j] * b[i][j]);
    }
    printf("\n");
  }
  return 0;
}