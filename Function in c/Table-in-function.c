#include <stdio.h>
int table(int num, int i)
{
  return num * i;
}
int main()
{
  int num, i, result;

  printf("\n Enter your number : ");
  scanf("%d", &num);

  for (i = 1; i < 11; i++)
  {
    result = table(num, i);
    printf("\n %d X %d  %d", num, i, result);
  }
  return 0;
}