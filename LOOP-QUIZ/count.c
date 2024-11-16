# include <stdio.h>
void main(){
  int num=0,sum=0,i=1;

  while (num<=5)
  {
    sum=num+sum;
    num++;
  }
  printf("\n count of all number : %d",sum);
}