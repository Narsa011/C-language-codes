# include <stdio.h>
void main(){
  char data;
  char arvind,narendra,suresh,dheraj,manhore,raju,mahendra,parveen;

  printf("\n Enter your name : ");
  scanf("%c",&arvind);

  switch (arvind)
  {
  case 'arvind':
    printf("\nName - Arvind suthar");
    printf("\nFather name - mangilal suthar");
    printf("\nStanderd - bca 1yr");
    printf("\nMobile No. - 8302103534");
    printf("\nDistrict - Sanchore");
    printf("\nState - Rajasthan");
    printf("\nPost - jhotra ");
    printf("\nDob - 02.06.2006 ");

    break;
  
  default:
  printf("\n Invalid name !");
    break;
  }
}