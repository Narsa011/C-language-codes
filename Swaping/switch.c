# include <stdio.h>
void main(){
  int number;
  printf("\n Enter your marks : ");
  scanf("%d",&number);

  switch (number)
  {
  case 100:
    printf("\n Congrulation, You class topper in class.");
    break;
  case 70:
    printf("\n You are selacted in top 30 students list for visited for ajmer toor.");
    break;
  case 40:
    printf("\n Please try again");
    break;
  
  default:
  printf("\n sorry, Your are not selected for Toor.");
    break;
  }
}