#include <stdio.h>
void main()
{
  int fact = 1, num, i;

  printf("\n Enter your number : ");
  scanf("%d", &num);

  i = num;
  
  while (i >= 1)
  {
    fact = fact * i;
    i--;
  }
  printf("\n Given number facturial is %d", fact);
}