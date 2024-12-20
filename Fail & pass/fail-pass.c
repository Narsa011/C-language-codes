# include <stdio.h>
int main(){
  int marks;
  printf("\n Enter your marks (0-100 only) : ");
  scanf("%d",&marks);

  printf("\n %s", (marks>33) ? "Congrats! You passed in exam." : "Sorry! You failed in exam.");
  return 0;
  
}