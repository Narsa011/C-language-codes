#include <stdio.h>
int area(int width, int height)
{
  int result = width * height;
  return result;
}
int main()
{
  int height, width, res;

  printf("\nEnter height : ");
  scanf("%d", &height);

  printf("Enter width  : ");
  scanf("%d", &width);
  res = area(width, height);
  printf("\nTotal area = %d", res);
}