#include <stdio.h>
void main()
{
  int i = 1;

  while (i <= 10)
  {
    printf("\n Enter your squre number : ");
    scanf("%d", &i);

    printf(" %d squre value = %d \n", i, i * i);

    i++;
  }
}