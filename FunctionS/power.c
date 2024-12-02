#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  printf("\nEnter value : ");
  scanf("%d",&a);

  int p;
  printf("Enter power value : ");
  scanf("%d",&p);

  int power = pow(a,p);
  printf("\n%d power is %d",a,power);
}