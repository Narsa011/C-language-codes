#include <stdio.h>

int area(int width, int height)
{
  int result = width * height;
  return result;
}
int main()
{
  int height, width, result;

  printf("\nEnter height value : ");
  scanf("%d", &height);

  printf("\nEnter width value : ");
  scanf("%d", &width);

  result = area(width, height);
  printf("\nTotal area of ractangle = %d ", result);
  return 0;
}