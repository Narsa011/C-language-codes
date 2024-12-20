#include <stdio.h>

void main()
{
  int i=1;

while (i<=10)
{
  printf("\n Enter your %d number : ",i);
  scanf("%d",&i);

  printf(" %d = %d\n",i,i*i);
  i++;
}

  return 0;
}