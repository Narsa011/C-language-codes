#include <stdio.h>
struct food
{
  int orderid;
  char name[30];
  int qty, prize;
};
void main()
{
  struct food f;

  printf("\nEnter your ID   : ");
  scanf("%d", &f.orderid);

  printf("Enter fastfood name : ");
  scanf("%s", &f.name);

  printf("Enter QTY : ");
  scanf("%d", &f.qty);

  printf("Enter prize: ");
  scanf("%d", &f.prize);

  printf("\n===== ORDER DETAILS =====");
  printf("\nOrder ID    : %d ", f.orderid);
  printf("\nOrder NAME  : %s ", f.name);
  printf("\nOrder QTY   : %d ", f.qty);
  printf("\nOrder PRIZE : %d ", f.prize * f.qty);
}