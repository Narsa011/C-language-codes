#include <stdio.h>
void main()
{
  int i=1,sum = 0, average, num=1;

  while (i <=10)
  {
    printf("\n Enter %d your number : ", i);
    scanf("%d", &num);
    sum = num + sum;
    i++;
  }
  average =sum/(i - 1);
  printf("\n 1 To 10 Sum Number : %d ", sum);
  printf("\n All number average : %d ", average);
}
