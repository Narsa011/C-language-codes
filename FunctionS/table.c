#include <stdio.h>
void table()
{
  int num;
  printf("\nEnter Your Number : ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    printf("\n %d X %d = %d", num, i, num * i);
  }
  return;
}
int main()
{
  table();
}