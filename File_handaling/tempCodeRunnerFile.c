  FILE *f;
  char ch;
  f = fopen("fdemo.txt", "w");

  while (ch != EOF)
  {
    ch = getchar();
    putc(ch, f);
  }
  fclose(f);

  printf("\nData stored susscefully");
  printf("\n Press ctrl+z to out of file.");