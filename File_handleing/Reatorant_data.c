#include <stdio.h>

int main()
{
  FILE *r;
  int id, qty, prize, total;
  char name[20], objact_name[20];

  // Opening the file in append and read mode
  r = fopen("restorant.txt", "a+");
  if (r == NULL)
  {
    printf("\nError: Could not open the file.\n");
    return 1;
  }

  // Writing to the file
  printf("\nEnter Coustumer details:\n");

  printf("Enter Coustumer ID: ");
  scanf("%d", &id);

  printf("Coustumer Name: ");
  scanf("%s", name);

  printf("Object Name: ");
  scanf("%s", objact_name);

  printf("Enter Object Quantity: ");
  scanf("%d", &qty);

  printf("Enter Price of 1 Object: ");
  scanf("%d", &prize);

  total = qty * prize;

  fprintf(r, "%d,%s,%s,%d,%d\n", id, name, objact_name, qty, total);
  fflush(r); // Ensures data is written to the file

  // Reading from the file
  rewind(r); // Move the file pointer to the beginning
  printf("\nReading Coustumer details from the file:\n");

  while (fscanf(r, "%d,%19[^,],%19[^,],%d,%d", &id, name, objact_name, &qty, &total) != EOF)
  {
    printf("\nCoustumer ID: %d", id);
    printf("\nCoustumer Name: %s", name);
    printf("\nObject Name: %s", objact_name);
    printf("\nQuantity: %d", qty);
    printf("\nTotal Price: %d\n", total);
  }

  fclose(r);
  return 0;
}
