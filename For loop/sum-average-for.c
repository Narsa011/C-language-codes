#include <stdio.h>

int main()
{
  int i, num, sum, avg;

  sum = 0;

  for (i = 1; i <= 10; i++)
  {
    printf("\nEnter your %d number : ", i);
    scanf("%d", &num);
    sum += num;
  }

  avg = sum / (i - 1);

  printf("\nTotal of the 10 number inputs: %d", sum);
  printf("\nAverage of all input numbers: %d\n", avg);

  return 0;
}
