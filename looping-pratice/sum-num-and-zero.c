#include <stdio.h>

void main()
{
  int i=1,num,sum=0;

  while (1)
  {
    printf("\n Enter your %d number : ",i);
    scanf("%d",&num);

    if (num == 0)
    {
      printf("\n Warning! you input 0 to sum stop.");
      break;
    }
    if (num>0)
    {
      sum=sum+num;
    }
    i++;
    
  }
 printf("\n Your total sum number : %d ",sum);
  return 0;
}