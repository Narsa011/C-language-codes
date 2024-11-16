#include <stdio.h>

void main()
{
  int num = 1;

  while (num <= 50)
  {
    if (num % 2 != 0)
    {
      printf("\n %d is odd number", num);
    }
    num++;
  }

  return 0;
}