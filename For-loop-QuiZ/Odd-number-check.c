#include <stdio.h>

void main()
{
  int i, num;

  for (i = 1, num = 50; i <= num; i++)
  {
    if (i % 2 != 0)
    {
      printf("\n%d is ODD", i);
    }
  }

  return 0;
}