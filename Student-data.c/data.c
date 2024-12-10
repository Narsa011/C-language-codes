#include <stdio.h>

void info()
{
  int id;
  printf("\nEnter your ID: ");
  scanf("%d", &id);

  char name[30];
  printf("Your name: ");
  scanf("%s", name);

  printf("\nWelcome, %s! Your ID is %d.\n", name, id);
}

void main()
{
  info();
  int class01;
  printf("Enter class: ");
  scanf("%d", &class01);

  if (class01 == 1)
  {
    int math1, hindi1, eng1;
    printf("\nEnter Math subject marks: ");
    scanf("%d", &math1);

    printf("Enter Hindi subject marks: ");
    scanf("%d", &hindi1);

    printf("Enter English subject marks: ");
    scanf("%d", &eng1);

    int total = math1 + hindi1 + eng1;
    float percentage = (float)total / 3;
    printf("\nEach paper is out of 80 marks.");
    printf("\nYour total percentage is: %.2f%%\n", percentage);
  }
  else if (class01 == 2)
  {
    int math2, hindi2, eng2;
    printf("\nEnter Math subject marks: ");
    scanf("%d", &math2);

    printf("Enter Hindi subject marks: ");
    scanf("%d", &hindi2);

    printf("Enter English subject marks: ");
    scanf("%d", &eng2);

    int total2 = math2 + hindi2 + eng2;
    float percentage2 = (float)total2 / 3;
    printf("\nEach paper is out of 80 marks.");
    printf("\nYour total percentage is: %.2f%%\n", percentage2);
  }
  else if (class01 == 3)
  {
    int math3, hindi3, eng3, environment3;
    printf("\nEnter Math subject marks: ");
    scanf("%d", &math3);

    printf("Enter Hindi subject marks: ");
    scanf("%d", &hindi3);

    printf("Enter English subject marks: ");
    scanf("%d", &eng3);

    printf("Enter Environment subject marks: ");
    scanf("%d", &environment3);

    int total3 = math3 + hindi3 + eng3 + environment3;
    float percentage3 = (float)total3 / 4;
    printf("\nEach paper is out of 80 marks.");
    printf("\nYour total percentage is: %.2f%%\n", percentage3);
  }
  else
  {
    printf("\nInvalid class entered.\n");
  }
}
