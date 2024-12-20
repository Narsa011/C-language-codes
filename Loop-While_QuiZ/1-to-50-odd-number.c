#include <stdio.h>
void main()
{
  int num = 50, i = 1;

  while (i <= num)
  {
    if (i % 2 != 0)
    {
      printf("\n %d is ODD", i);
    }
    i++;
  }
}