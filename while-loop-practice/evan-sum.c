#include <stdio.h>

int main(){
  int i=1,sum=0,num;
printf("\n Enter your limit : ");
scanf("%d",&num);

  while (i<=num)
  {
    if (i % 2 == 0 )
    {
      sum = sum + i;
    }
    i++;
  }
  printf("\n Sum op even number up %d = %d ",num,sum);
   return 0;
}