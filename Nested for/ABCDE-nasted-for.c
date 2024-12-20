#include <stdio.h>
void main()
{
  int i, num, a;
  for (i = 'A'; i <= 'E'; i++)
  {
    for (num = 'A'; num <= i; num++)
    {
      printf("%c", num);
    }
    printf("\n");
  }
}