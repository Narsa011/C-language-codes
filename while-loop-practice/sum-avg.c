#include <stdio.h>

int main(){
  int i,sum=0,num,avg=0;

  for ( i = 1; i <=10; i++)
  {
    printf("\n Enter your %d number : ",i);
    scanf("%d",&num);

    sum = sum + num;
  }
  
  avg = sum /(i-1);
  printf("\nSum of 10 number : %d",sum);
  printf(" avarege of all input numbers : %d",avg);

   return 0;
}