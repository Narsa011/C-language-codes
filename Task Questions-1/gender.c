# include <stdio.h>
int main(){
  char gander;
  printf("\n Enter your gender male(m) and female(f) : ");
  scanf("%c",&gander);
  
  if (gander=='m' || gander=='M')
{
  printf("\n You enterd 'm' and you are a male.");
}
else if (gander=='f' || gander=='F')
{
   printf("\n You enterd 'f' and you are a female.");
}
else
{
  printf("\n Invalid Output!");
}




}