#include <stdio.h>

void main()
{
  int i, num;

  for (i = 2; i <= 10; i++)
  {
    for (num = 1; num <= 10; num++)
    {
      printf("\n %d X %d = %d", i, num, num * i);
    }
    printf("\n");
  }

  return 0;
}