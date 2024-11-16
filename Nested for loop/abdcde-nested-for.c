#include <stdio.h>

int main()
{
  char i, num;
  for (i = 'A'; i <= 'E'; i++)
  {

    for (num = 'A'; num <= i; num++)
    {
      printf("%c", num);
    }
    printf("\n");
  }

  return 0;
}
