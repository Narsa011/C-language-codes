#include <stdio.h>

int main()
{
  int num;
  printf("\nEnter value : ");
  scanf("%d", &num);

  int fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  printf("\n%d factorial number is %d", num, fact);
}