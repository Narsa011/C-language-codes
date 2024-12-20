#include <stdio.h>
void main()
{
  int i = 1, num;

  printf("\n Enter your number : ");
  scanf("%d", &num);

  while (i <= 10)
  {
    printf("\n %d X %d = %d", num, i, num * i);
    i++;
  }
}