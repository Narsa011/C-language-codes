#include <stdio.h>

int main()
{
  int a[5], i, j;

  for (i = 0; i <= 4; i++)
  {
    printf("\nEnter your %d value : ", i + 1);
    scanf("%d", &a[i]);
  }
  for (i = 4; i >= 0; i--)
  {
    printf("\nReverse value : %d", a[i]);
  }

  return 0;
}