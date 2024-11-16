# include <stdio.h>
void main(){
  float length,width,area;

  printf("\n Enter your rectangle langth : ");
  scanf("%f", &length);

  printf("\n Enter your ractangle width :");
  scanf("%f",&width);

  area=length*width;
  printf("\n Your area of ractangle = %.2f", area);
  }