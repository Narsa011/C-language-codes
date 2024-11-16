# include <stdio.h>

int main(){
  int number,r;
  printf("Enter reverce value : ");
  scanf("%d",&number);

while (number>0)
{
  r=number%10;
  printf("%d",r);
  number=number/10;
}


return 0;
}