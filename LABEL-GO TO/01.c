#include <stdio.h>
int main()
{
  int i = 0;
NARU:
  i++;

  if (i <= 10)
    printf("\n %d", i);
  {
    goto NARU;
  }
  return 0;
}