# include <stdio.h>
void main(){
  int number;
  printf("\n Enter your number for check odd and even : ");
  scanf("%d",&number);

  if (number%2==0)
  {
    printf("\nYou enterd number %d is \"EVEN\" ");

  }
  else{
    printf("\n You enterd number %d is \"ODD\" ");
  }
  
}