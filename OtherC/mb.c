#include <stdio.h>
void main()
{
  float mb;
  unsigned long bytes;

  printf("\n Enter mb value : ");
  scanf("%f", &mb);

  bytes = mb * 1024 * 1024;
  printf("\n %.2f mb = %lu bytes ", mb, bytes);
}