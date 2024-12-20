#include <stdio.h>
void main()
{
  int bits;
  double bytes;
  printf("\n Convart bits to bytes");
  printf("\n");

  printf("\n Ener your bits number : ");
  scanf("%d", &bits);

  bytes = bits * 8;

  printf("\n %d bits = %.2f bytes", bits, bytes);
}