#include <stdio.h>
struct employee
{
  int id;
  char name[30];
  int sallary;
};
void main()
{
  struct employee e;

  printf("\nEnter your ID : ");
  scanf("%d", &e.id);

  printf("Enter your name : ");
  scanf("%s", &e.name);

  printf("\nWelcome %s! your id is %d", e.name, e.name);

  printf("\nEnter your sallary : ");
  scanf("%d", &e.sallary);

  printf("\n ===== YOUR DETAILS =====");
  printf("\nYour ID      : %d", e.id);
  printf("\nYour NAME    : %s", e.name);
  printf("\nYour SALLARY : %d", e.sallary);
}