#include <stdio.h>

int main(){
  int average,num,sum=0,i=1;

  while (i<=10)
  {
    printf("Enter your %d number : ",i);
    scanf("%d",&num);
    sum= sum+num;
    i++;
  }
  average=sum/(i-1);
  printf("\nTotal of 10 numbers : %d",sum);
  printf("\n Average of all enterd number : %d",average);
   return 0;
}