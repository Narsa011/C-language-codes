#include<stdio.h>
#include<math.h>

int main()
{
  int a;
  printf("\nEnter number : ");
  scanf("%d",&a);

  int b;
  printf("Enter power value : ");
  scanf("%d",&b);

  int result=pow(a,b);
  printf("\n%d power is %d",a,result);
}