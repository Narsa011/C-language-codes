# include <stdio.h>
void main(){
  int num;

  printf("\n Enter your number : ");
  scanf("%d",&num);
  if (num%2==0)
  {
    printf("\n You enterd number %d is \"EVEN\".",num);
  }
  else
  {
    printf("\n You enterd number %d is \"ODD\".",num);
  }
  
  
}