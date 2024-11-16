#include <stdio.h>

void main(){
  int a,b;

  for ( a = 1; a <=5; a++)
  {
    for ( b = 1; b <=a; b++)
    {
      printf("%c'A'");
    }
    printf("\n");
  }
  
   return 0;
}