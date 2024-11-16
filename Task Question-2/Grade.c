#include <stdio.h>
void main()
{

  float per;
  printf("\n Enter your Percentage number  : ");
  scanf("%f", &per);

  if (per > 100)
  {
    printf("\n Input invalid - Enter only 1 To 100 only");
  }
  else if (per >= 90)
  {
    printf("\n Grade : A");
  }
  else if (per >= 75)
  {
    printf("\n Grade : B");
  }
  else if (per >= 60)
  {
    printf("\n Grade : D");
  }
  else if (per >= 33)
  {
    printf("\n Grade : E");
  }
  else if (per < 33)
  {
    printf("\n You are Fail");
  }
  else
  {
    printf("\n Input Invalid!");
  }
  return 0;
}