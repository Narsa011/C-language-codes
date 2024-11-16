#include <stdio.h>

int main(){
  int num1,num2;
  printf("\n Enter your first number: ");
  scanf("%d",&num1);

  printf("\n Enter your second number: ");
  scanf("%d",&num2);

  if (num1>=num2)
  {
    printf("\n You enterd first number %d grater than second number %d.",num1,num2);
  }
  else
  {
    printf("\n You enterd first number %d less than second number %d.",num1,num2);
  }
  
  
   return 0;
}