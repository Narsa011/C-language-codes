#include <stdio.h>
void main()
{
  int i = 1, num, sum = 0;

  printf("\n Enter your limit : ");
  scanf("%d", &num);

  while (i <= num)
  {
    if (i % 2 == 0)
    {
      sum = sum + i;
    }
    i++;
  }
  printf("sum of the even number from %d = %d ", num, sum);
}
