#include <stdio.h>
int fact(int x)
{
  if (x==1)
  {
    return x;
  }
  else{
    return x*fact(x-1);
  }
  
}
int main()
{
  int num;
  printf("\nEnter value :");
  scanf("%d", &num);

  int result = fact(num);
  
  printf("%d factorial is %d", num, result);
}