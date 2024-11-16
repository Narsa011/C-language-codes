# include <stdio.h>
void main(){
  char number;
  float usd,inr;
  printf("\n Enter Your $ doller : ");
  scanf("%f",&usd);
 
 inr= usd*84.06;
 printf("%.2f Rupees",inr);
}