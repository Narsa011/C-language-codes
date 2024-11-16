# include <stdio.h>
void main(){
  int year;
  printf("\n Enter your year : ");
  scanf("%d",&year);

  if (year%4==0)
  {
    printf("\n You enterd %d he is leap year.",year);
  }
  else{
    printf("\n You enterd %d he is not leap year.",year);
  }
  return 0;
} 