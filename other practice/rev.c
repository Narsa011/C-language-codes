# include <stdio.h>
int main(){
  int i,rev=0;

  printf("\n Enter your reverce value :");
  scanf("%d",&i);

while (i>0)
{
 rev=(rev*10);
 i=i%10;
}
printf("Reverce value = %d",rev);

}