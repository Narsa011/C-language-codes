#include <stdio.h>

void main()
{
  int i, num;

  for (i = 1, num = 100; i <= num; i++)
  { 
    if (i % 2 == 0)
    {
      printf("\n %d is Even", i);
    }
  }

  return 0;
}