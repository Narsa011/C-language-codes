#include <stdio.h>
void main()
{
  int i, a, num;

  for (i = 1; i <= 5; i++)
  {
    for (a = 0; a <= 5 - i; a++)
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