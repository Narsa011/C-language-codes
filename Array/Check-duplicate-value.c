#include <stdio.h>

int main()
{
  int a[10], j, i, count = 0;

  for (i = 0; i < 10; i++)
  {
    printf("\nEnter your %d number : ", i + 1);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (a[i] == a[j])
      {
        printf("\nDuplicate value is : %d", a[i]);
        count++;
        break;
      }
    }
  }
  printf("\nDulicate value count : %d\n", count);

  return 0;
}