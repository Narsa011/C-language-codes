#include <stdio.h>

int main()
{
  int a[5], i, max, min;

  for (i = 0; i < 5; i++)
  {
    printf("\nEnter your %d value : ", i + 1);
    scanf("%d", &a[i]);

    max = a[0];
  }
  for (i = 0; i < 5; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  min = a[0];
  for (i = 0; i < 5; i++)
  {
    if (a[i] < min)
    {
      min = a[i];
    }
  }
printf("\n Max value of array : %d",max);
printf("\n Min value of array : %d",min);
  return 0;
}