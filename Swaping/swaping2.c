#include <Stdio.h>
void main()
{
  int a, b, c;
  printf("\n Enter A Value : ");
  scanf("%d", &a); // User से A की value input करवाने के लिए !

  printf("\n Enter B Value : ");
  scanf("%d", &b); // User से B की value input करवाने के लिए !

  c = a; // A की value C मे डालने पर.
  a = b; // B की value A मे डालने पर..
  b = c; // C की value B मे डालने पर...
  printf("\n After swaping a value = %d", a);
  printf("\n After swaping b value = %d", b);
}