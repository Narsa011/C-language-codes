#include <stdio.h>
int main()
{
  int num1, num2, a, b, c, d;
  printf("\nEnter first value num1 : ");
  scanf("%d", &num1);

  printf("\n Enter second value num2: ");
  scanf("%d", &num2);

  a = num1;
  b = num2;
  num2 = a;
  num1 = b;
  printf("\nAfter value : %d", num1);
  printf("\nAfter value : %d", num2);
}