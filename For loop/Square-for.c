# include <stdio.h>
void main(){
  int i;

  for ( i = 1; i <=10; i++)
  {
    printf("\n Enter your %d numbers : ",i);
    scanf("%d",&i);
    printf(" %d square --> %d\n",i,i*i);
  }
  
}