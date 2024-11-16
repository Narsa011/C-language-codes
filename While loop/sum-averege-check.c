#include <stdio.h>

int main()
{
  int num, sum = 0, i = 1;
  int average;

  while (i <= 10)
  {
    printf("\nEnter your %d number: ", i);
    scanf("%d", &num);
    sum = sum + num;
    i++;
  }

  average = sum / (i - 1);
  printf("\nTotal of 10 numbers : %d", sum);
  printf("\nAverage of entered numbers : %d", average);

  return 0;
}
