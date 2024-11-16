#include <stdio.h>
void main()
{
  int i, num, a;

  for (i = 1; i <= 5; i++)
  {

    for (a = 1; a <= 5 - i; a++)
    {
      printf(" ");
    }

    for (num = 1; num <= i; num++)
    {
      printf("*");
    }
    printf("\n");
  }
}
