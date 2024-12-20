#include <stdio.h>
int main()
{
  FILE *f;
  char ch;
  f = fopen("fdemo.txt", "w");
  if (f == NULL)
  {
    printf("\n File not opened.");
  }
  else
  {
    while (ch != EOF)
    {
      ch = getchar();
      putc(ch, f);
    }
    fclose(f);
  }
  printf("\nData stored susscefully");
  printf("\n Press ctrl+z to out of file.\n");

  f = fopen("fdemo.txt", "r");
  if (f == NULL)
  {
    printf("\nFIle is not opened.");
  }
  else
  {

    while (1)
    {
      ch = getc(f);
      printf("%c", ch);
      if (ch == EOF)
      {
        break;
      }
    }
    fclose(f);
  }
}