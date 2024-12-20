#include <stdio.h>
int main()
{
  int a[10], i, evenCount = 0, oddCount = 0;
  for (i = 0; i < 10; i++)
  {
    printf("\nEnter your %d value : ", i + 1);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 10; i++)
  {
    if (a[i] % 2 == 0)
    {
      printf("\n %d number is even", a[i]);
      evenCount++;
    }
  }
    for (i = 0; i < 10; i++)
    {
      if (a[i] % 2 != 0)
      {
        printf("\n %d number is odd", a[i]);
        oddCount++;
      }
    }
    printf("\n Total even numbers = %d", evenCount);
    printf("\n Total odd numbers = %d", oddCount);
  return 0;
}