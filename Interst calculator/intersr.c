#include <stdio.h>

int main()
{
  int rs, rate, time, total;
  printf("\nEnter your RS : ");
  scanf("%d", &rs);

  printf("\nEnter your Rate : ");
  scanf("%d", &rate);

  printf("\nEnter your Time : ");
  scanf("%d", &time);

  total = rs * time * rate / 100;
  printf("\n Interst RS : %d", total);
  printf("\n Total : %d", total+rs                                      );

  return 0;
}