#include <stdio.h>
void main()
{
  float langth, width, area;

  printf("\n Enter Your Ractangle Langth Value : ");
  scanf("%f", &langth);

  printf("\n Enter Your Ractangle Width Value : ");
  scanf("%f", &width);

  area = width * langth;

  printf("\n Your Ractangle Area = %.2f", area);
}