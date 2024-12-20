#include <stdio.h>

int main()
{
  FILE *f;
  int id, i,num;
  char name[30], class1[20];
  float per;

  printf("\nEnter number of students : ");
  scanf("%d",&num);

  // Open file in write mode
  f = fopen("stinfo.txt", "w");
  if (f == NULL)
  {
    printf("\nError: File could not be opened for writing.");
    return 1;
  }


  for (i = 1; i <=num; i++)
  {
    printf("\nEnter details for Student %d:\n", i);

    printf("ID: ");
    scanf("%d", &id);
    getchar(); 

    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    printf("Class: ");
    fgets(class1, sizeof(class1), stdin);
    class1[strcspn(class1, "\n")] = '\0';

    printf("Percentage: ");
    scanf("%f", &per);

    // Write to file
    fprintf(f, "%d %s %s %.2f\n", id, name, class1, per);
  }
  fclose(f);

  // Reopen file in read mode
  f = fopen("stinfo.txt", "r");
  if (f == NULL)
  {
    printf("\nError: File could not be opened for reading.");
    return 1;
  }

  // Read and display student details
  printf("\n--- Student Records ---\n");
  i = 1;
  while (fscanf(f, "%d %s %s %f", &id, name, class1, &per) != EOF)
  {
    printf("\nStudent %d:\n", i++);
    printf("ID         : %d\n", id);
    printf("Name       : %s\n", name);
    printf("Class      : %s\n", class1);
    printf("Percentage : %.2f\n", per);
  }
  fclose(f);

  return 0;
}
