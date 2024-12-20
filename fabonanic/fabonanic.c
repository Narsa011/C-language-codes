#include <stdio.h>
int main()
{
  int num, i, a = 0, b = 1, c, sum = 0;
  printf("\nEnter a number : ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    printf("%d ", a);
    sum = sum + a;
    c = a + b;
    a = b;
    b = c;
  }
  printf("\n%d fabonanic sum of %d", num, sum);
}