#include <stdio.h>

int main(){
  int i;

  for(i=1;i<=10;i++)
  {
    printf("\n Enter your %d number : ",i);
    scanf("%d",&i);

    printf(" %d Cube --> %d\n",i,i*i*i);
  }
   return 0;
}