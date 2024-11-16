#include <stdio.h>
void main()
{
  int n;

  printf("Emter your number : ");
  scanf("%d",&n);

  for (int  i = 1; i <=n; i++)
  {
    for (int j = 1; j <=i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  
}