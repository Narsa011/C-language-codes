#include <stdio.h>

void main(){

  int num;

  printf("Enter your number : ");
  scanf("%d",&num);

  if (num<0)
  {
    printf("\n Enterd number is nagative");
  }
  else if (num>0)
  {
    printf("\n Enterd number is positive");
  }
  else if (num==0)
  {
    printf("\n Enterd number is Zero");
  }
  else
  {
    printf("\n Invalid input!");
  }
   return 0;
}