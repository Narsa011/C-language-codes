#include <stdio.h>
int main()
{
  int num[50], max, i, sort, size;
  printf("\n Enter size of array : ");
  scanf("%d", &size);

  for (i = 0; i < size; i++)
  {
    printf("\n Enter your %d value : ", i + 1);
    scanf("%d", &num[i]);
  }
  max = num[0];
  for (i = 0; i < size; i++)
  {
    if (num[i] > max)
    {
      max = num[i];
    }
  }
  sort = num[0];
  for (i = 0; i < size; i++)
  {
    if (num[i] < sort)
    {
      sort = num[i];
    }
  }
  printf("\nmax value of arry -->%d ", max);
  printf("\nsort value of arry -->%d ", sort);
}