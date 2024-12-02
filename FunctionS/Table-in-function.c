#include <stdio.h>
int table(int num, int i)
{
  int result = (num);
  return num;
}

int main()
{
  int num, res;

  printf("\n Enter your value : ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    res = table(num, i);
    printf("\n %d X %d = %d", num, i, num * i);
  }
}