# include <stdio.h>
int main(){

  int number;
 
  printf("\nMath no. code 1, science code 1, other subject code 3");
   printf("\nEnter a subject type no :  "); 
  scanf("%d",&number);
  if (number==1)
  {
    printf("\nCongrats! you win $25");
  }
  else if(number==2)
  {
    printf("\ncongrats! you win $11");
  }
  else if  (number==3)
  {
    printf("\nSorry, offer avaliable on science & math subject");
  }
  else{
    printf("\nInput invalid");
  }

  


}