#include <stdio.h>

int main(){
  int number;

  printf("\n Enter your marks (0-100) : ");
  scanf("%d",&number);

  if (number>100)
  {
    printf("\n Invalid output!");
  }
  else if (number>=33)
  {
    printf("\n Congrats! You passed in exam.");

  }
  else
  {
    printf("\n Sorry! You failed in exam.");
  }
  
   return 0;
}