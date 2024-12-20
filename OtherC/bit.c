#include <stdio.h>
void main()
{
  int bytes, bits;

  printf("\n Convart bytes to bits");
  printf("\n");

  printf("\n Enter your byts number : ");
  scanf("%d", &bytes);

  bits = bytes / 8;

  printf("\n %d bytes = %d bits", bytes, bits);
}