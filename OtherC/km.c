# include <stdio.h>
void main(){
  int mtr,km;

  printf("\n Enter Km Value : ");
  scanf("%d",&km);

  mtr=km*1000;
  printf("\n %d Km = %d Mtr", km,mtr);
}