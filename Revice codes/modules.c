#include <stdio.h>

int main()
{
  int num;
  printf("\nEnter number : ");
  scanf("%d", &num);

  num = num % 2;

  if (num == 0 || num == 1)
  {
    printf("%d", num);
  }
  else
  {
    printf("\nEnter value mouduls is not 1 and 0 ");
  }
}