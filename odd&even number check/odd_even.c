#include <stdio.h>
int main()
{
  int number;

  printf("\n ODD and EVEN calculatar - ");
  printf("\n");

  printf("\n Enter your first number : ");
  scanf("%d", &number);

  if (number % 2 == 0)
  {
    printf("\n You enterd number  %d is = \"EVEN\"", number);
  }
  else
  {
    printf("\n You enterd number %d is = \"ODD\"", number);
  }
  return 0;
}
