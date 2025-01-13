#include <stdio.h>

void readStudentData()
{
  FILE *s = fopen("St_data.txt", "r");
  if (s == NULL)
  {
    printf("\nStudent Data File Not Found or Could Not Be Opened.\n");
    return;
  }

  printf("\n==== Student Data ====\n");
  char ch;
  while ((ch = fgetc(s)) != EOF)
  {
    putchar(ch);
  }
  fclose(s);
}

// Function to read and display marks data
void readMarksData()
{
  FILE *r = fopen("marks.txt", "r");
  if (r == NULL)
  {
    printf("\nMarks Data File Not Found or Could Not Be Opened.\n");
    return;
  }

  printf("\n==== Marks Data ====\n");
  char ch;
  while ((ch = fgetc(r)) != EOF)
  {
    putchar(ch);
  }
  fclose(r);
}

int new()
{
  FILE *s;

  s = fopen("St_data.txt", "a+");

  if (s == NULL)
  {
    printf("\nStudnet Data Not Saved....... ");
  }
  else
  {

    int id;
    printf("\nEnter New Student ID  : ");
    scanf("%d", &id);

    char name[30];
    printf("\nEnter Student Name    : ");
    scanf("%s", &name);

    char F_name[30];
    printf("\nStudent Father Name   : ");
    scanf("%s", &F_name);

    char post[20];
    printf("\nStudent Village Name  : ");
    scanf("%s", &post);

    char District_name[20];
    printf("\nStudent District Name : ");
    scanf("%s", &District_name);

    char Aadhar_id[12];
    printf("\nStudent Aadhar Number : ");
    scanf("%s", &Aadhar_id);

    char Ph_no[10];
    printf("\nPhone Number : ");
    scanf("%s", &Ph_no);

    printf("\nStudent Data Saved Susscfully... !");

    fprintf(s, "%d , %s , %s , %s , %s , %s , %s", id, name, F_name, post, District_name, Aadhar_id, Ph_no);
  }
  fclose(s);
}
int marks()
{
  FILE *r;
  r = fopen("marks.txt", "a+");
  {
    int hindi;
  H:
    printf("\nEnter hindi Marks :");
    scanf("%d", &hindi);
    if (hindi > 100 || hindi < 0)
    {
      printf("\nInvalid input ( try again )\n");
      goto H;
    }

    int eng;
  E:
    printf("\nEnter english Marks :");
    scanf("%d", &eng);
    if (eng > 100 || eng < 0)
    {
      printf("\nInvalid input ( try again )\n");
      goto E;
    }

    int math;
  M:
    printf("\nEnter math Marks :");
    scanf("%d", &math);
    if (math > 100 || math < 0)
    {
      printf("\nInvalid input ( try again )\n");
      goto M;
    }

    int science;
  S:
    printf("\nEnter science Marks :");
    scanf("%d", &science);
    if (science > 100 || science < 0)
    {
      printf("\nInvalid input ( try again )\n");
      goto S;
    }

    int sst;
  SSST:
    printf("\nEnter sst Marks :");
    scanf("%d", &sst);
    if (sst > 100 || sst < 0)
    {
      printf("\nInvalid input ( try again )\n");
      goto SSST;
    }

    int total = hindi + eng + math + science + sst;
    float per = total / 5;

    printf("\nStudent marks saved susscefully.......\n");
    fprintf(r, "%d , %d , %d , %d , %d , %d , %.2f", hindi, eng, math, science, sst, total, per);
  }
  fclose(r);
}

int main()
{
MENU:
  printf("\n==== School Managment ====");
  printf("\n1. New admission");
  printf("\n2. Enter students marks");
  printf("\n3. All Student Data");
  printf("\n4. Exit");

  int choose;
  printf("\nChoose as a option : ");
  scanf("%d", &choose);
  if (choose == 1)
  {
    new ();
    goto MENU;
  }
  if (choose == 2)
  {
    marks();
    goto MENU;
  }
  if (choose == 3)
  {
    readStudentData();
    goto MENU;
  }
  if (choose == 4)
  {
    printf("\nExit of program");
  }
}