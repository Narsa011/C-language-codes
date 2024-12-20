#include <stdio.h>

void main()
{

  int num, num1, num2, res = 0, res1 = 0, res2 = 0, total = 0;

  printf("\n Enter your first number : ");
  scanf("%d", &num);

  printf("\n Enter your second number : ");
  scanf("%d", &num1);

  printf("\n Enter your third number : ");
  scanf("%d", &num2);

  res = num * num * num;
  res1 = num1 * num1 * num1;
  res2 = num2 * num2 * num2;
  total = res + res1 + res2;

  printf("\n Total of all inputs : %d ", total);
}