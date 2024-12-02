#include <stdio.h>
int sum(int x, int y)
{
  return x + y;
}
int main()
{
  int a, b, c;
  printf("\nEnter 1st number : ");
  scanf("%d", &a);

  printf("Enter 2nd number : ");
  scanf("%d", &b);

  c = sum(a, b);
  printf("\n%d + %d = %d", a, b, c);
}