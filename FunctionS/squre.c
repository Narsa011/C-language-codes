#include <stdio.h>
int squre(int num, int res)
{
  res = (num);
  return num*num;
}
int main()
{
  int num, result;
  printf("\n Enter the value : ");
  scanf("%d", &num);

  result = squre (num,result);
  printf(" %d = %d", num,result);
  return 0;
}