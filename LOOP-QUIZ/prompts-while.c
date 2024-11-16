# include <stdio.h>
void main(){
  int sum=0,num ,i=1;

  while (1)
  {
    printf("\n Enter your %d number : ",i);
    scanf("%d",&num);

    if (num == 0)
    {
      printf("\n Stop! number addition is stoped");
      break;
    }
  
    if (num > 0)
    {
      sum = sum+num;
    }
    
    i++;
  }
  printf("\n Sum of the all input positive intizer : %d",sum);
} 