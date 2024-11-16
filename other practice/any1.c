# include <stdio.h>
void main(){
  float Principal,rate,time,intrest;
  printf("\nEnter your principal amount rate (In rupess): ");
  scanf("%f",&Principal);

  printf("\nEnter your intresrt rate (In parecantage): ");
  scanf("%f",&rate);

  printf("\nEnter your time  (In years): ");
  scanf("%f",&time);

  intrest=(Principal*rate*time/100);
  printf("\nYour intrsted amount = %f", intrest);
  printf("\n Your total amount is %f", Principal+intrest);


  
}
