#include <stdio.h>

int main()
{
  int a[5], i, max = 0;

  for (i = 0; i < 5; i++)
  {
    printf("\nEnter your %d number : ", i + 1);
    scanf("%d", &a[i]);
  }
  max=a[0];
for ( i = 0; i < 5; i++)
{
  if (a[i] > max )
  {
    max =a[i];
  }
}
printf("\nMax number = %d",a[i]);

  return 0;
}