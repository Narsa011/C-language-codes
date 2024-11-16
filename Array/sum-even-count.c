#include <stdio.h>
int main()
{
  int a[10], i, oddCount = 0, evenCount = 0;

  for (i = 0; i < 10; i++)
  {
    printf("\n Enter your %d number value : ", i + 1);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < a[i]; i++)
  {
    if (a[i] % 2 == 0)
    {
      printf("\n number %d is even ", a[i]);
      evenCount++;
    }
  }
  for (i = 0; i < 10; i++)
  {
    if (a[i] % 2 != 0)
    {
      printf("\nnumber %d is odd", a[i]);
      oddCount++;
    }
  }
  printf("\n Total even number: %d ", evenCount);
  printf("\n Total odd number: %d ", oddCount);
}