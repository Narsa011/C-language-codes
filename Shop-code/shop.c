#include <stdio.h>

int main()
{
  double sum = 0, dis, total;
  int items;

  printf("\nNarendra Research Center");
  printf("\nTotal items: ");
  scanf("%d", &items);

  int a[items];

  for (int i = 0; i < items; i++)
  {
    printf("\nItem %d RS: ", i + 1);
    scanf("%d", &a[i]);
    sum += a[i];
  }
  printf("\nTotal: %.2f\n", sum);

  printf("\nDiscount (percentage): ");
  
  scanf("%lf", &dis);

  dis = (sum * dis) / 100;
  total = sum - dis;

  printf("Total after discount: %.2f RS\n", total);

  return 0;
}
