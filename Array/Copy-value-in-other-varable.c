#include <stdio.h>
int main()
{
  int a[5] = {1, 45, 78, 23, 67}, b[5];

  for (int i = 0; i <= 4; i++)
  {
    b[i] = a[i];
    printf("\nA value copied in B : %d", b[i]);
  }
  return 0;
}