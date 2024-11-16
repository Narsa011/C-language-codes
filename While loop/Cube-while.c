#include <stdio.h>

int main()
{
  int i = 1;

  while (i <= 10)
  {
    printf("\n Enter your any number : ");
    scanf("%d", &i);
    printf(" %d cube = %d \n", i, i * i * i);
    i++;
  }

  return 0;
}