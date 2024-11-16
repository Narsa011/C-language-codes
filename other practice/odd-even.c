# include <stdio.h>
void main(){

  int number;
  printf("\nEnter the number for check even & odd : ");
  scanf("%d",&number);

  if (number%2==0)
  {
    printf("\nYou enterd number %d is \"Even\"",number);
  }
  else{
    printf("\n You enterd number %d is \"Odd\"",number);
  }
  
}