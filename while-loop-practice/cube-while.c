#include <stdio.h>

int main()
{
  int i = 1;

  while (i <= 10)
  {
    printf("\n Enter your numer : ");
    scanf("%d", &i);
    printf("\n %d cube %d\n", i, i * i * i);
  i++;
  }

  return 0;
}