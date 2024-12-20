#include <stdio.h>

void main()
{
  int i,fact=1,num;

  printf("\n Enter your limit : ");
  scanf("%d",&num);
   i=num;
  while (i>=1)
  {
    fact=fact*i;
    i--;
  }
 printf("\nGiven number of factorial %d",fact);
  return 0;
}