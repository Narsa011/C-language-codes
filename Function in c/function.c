#include <stdio.h>

int sum(int num1, int num2)
{
  int result = num1 + num2;
  return result;
}
int less(int num1, int num2)
{
  int result = num1 - num2;
  return result;
}
int mul(int num1, int num2)
{
  int result = num1 * num2;
  return result;
}
int div(int num1, int num2)
{
  int result = num1 / num2;
  return result;
}

int main()
{
  int a, b, res;

  printf("\nEnter your first number : ");
  scanf("%d", &a);

  printf("\nEnter your second number : ");
  scanf("%d", &b);

  res = sum(a, b);
  printf("\n %d + %d = %d", a, b, res);

  res = less(a, b);
  printf("\n %d - %d = %d", a, b, res);

  res = mul(a, b);
  printf("\n %d * %d = %d", a, b, res);

  res = div(a, b);
  printf("\n %d / %d = %d", a, b, res);
}