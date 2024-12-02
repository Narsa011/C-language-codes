#include <stdio.h>
int swap(int a,int b)
{
  return a,b;
}
int main()
{
  int a,b,c=0;
  printf("\nEnter first number : ");
  scanf("%d",&a);

  printf("\nSecond number : ");
  scanf("%d",&b);
  
  c=c+a;
  a=a+b;
  b=b-c;

  printf("\nAtter swapping %d",a);
  printf("\nAtter swapping %d",b);
  
  
}
