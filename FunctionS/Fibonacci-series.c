#include <stdio.h>

int fabo(int a, int b)
{
  return a, b;
}

int main()
{
  int num, a = 0, b = 1, c, i;

  printf("Enter value: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    c = fabo(a, b);
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}
