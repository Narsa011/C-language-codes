# include <stdio.h>
void main(){
  char oprator;
  double num1,num2,result;
  printf("\n Enter your optator (+,-,*,/) : ");
  scanf("%c",&oprator);

  printf("\n Enter your first number : ");
  scanf("%lf",&num1);

  printf("\n Enter your second number : ");
  scanf("%lf",&num2);

  switch (oprator)
  {
  case '+':
    result = num1+num2;
    printf("\n %.21lf + %.21lf = %.21lf Ans",num1,num2,result);
    break;

  case '-':
    result = num1-num2;
    printf("\n %.21lf - %.21lf = %.21lf Ans",num1,num2,result);
    break;

  case '*':
    result = num1*num2;
    printf("\n %.21lf * %.21lf = %.21lf Ans",num1,num2,result);
    break;

  case '/':
    if (num2!=0)
    {
      result=num1/num2;
      printf("\n %.21lf / %.21lf = %.21xlf Ans",num1,num2,result);
    }
    else
    {
      printf("\n Warning! 0 is not division nubmber");
    }
    break;

  default:
  printf("\n Invalid oprator!");
    break;
  }
}
