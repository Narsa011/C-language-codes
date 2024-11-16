# include <stdio.h>
void main(){
  int a,b;
  printf("\nEnter A Value : ");
  scanf("%d",&a);

  printf("\nEnter B Value: ");
  scanf("%d",&b);

  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nAfter swaping A value = %d",a);
  printf("\nAfter swaping B value = %d",b);
}