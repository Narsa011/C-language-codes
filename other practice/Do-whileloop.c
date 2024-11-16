# include <stdio.h>
int main (){
  int number,index=1;
  printf("\n Enter your number : ");
  scanf("%d",&number);
 do
 {
  printf("\n %d",index++);
  index = index * 2;
 } while (index<=number);
 
}
  
    
  
