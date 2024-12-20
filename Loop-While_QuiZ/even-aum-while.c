#include <stdio.h>

void main()
{
  int count = 1,sum = 0,num;

  printf("\n Enter your number : ");
  scanf("%d",&num);

  while (count<=num)
  {
    if (count % 2 == 0)
    {
      sum = sum + count;
    }
    count++;
  }
printf("Sum of the even up number %d = %d\n",num,sum);
  return 0;
}