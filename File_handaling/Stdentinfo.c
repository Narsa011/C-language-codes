#include <stdio.h>

int main()
{
  FILE *f;
  int id, i, num;
  char name[20], class1[20];
  float per;

  f = fopen("info.txt", "w");

  printf("\nEnter students of number : ");
  scanf("%d", &num);

  if (f == NULL)
  {
    printf("\nFile is not open for writing....");
  }
  else
  {
    for (i = 1; i <= num; i++)
    {
      printf("\n%d students details....", i);

      printf("\nEnter your ID :");
      scanf("%d", &id);

      printf("\nName : ");
      scanf("%s", &name);

      printf("\nClass: ");
      scanf("%s", &class1);

      printf("\nPercantage : ");
      scanf("%f", &per);

      fprintf(f, "%d %s %s %.2f\n", id, name, class1, per);
    }
    fclose(f);
  }
  f = fopen("info.txt", "r");
  if (f == NULL)
  {
    printf("\nFile is not reading....");
  }
  else
  {
    for (i = 1; i <= num; i++)
    {
      fscanf(f, "%d %s %s %f", &id, name, class1, &per);

      printf("\n%d student record", i);

      printf("\nStudent Id         : %d", id);

      printf("\nStudent Name       : %s", name);

      printf("\nStudent Class      : %s", class1);

      printf("\nStudent percantage : %.2f%%\n", per);
    }
    fclose(f);
  }
  printf("\nFile saved suscessfully.....................................!");
}