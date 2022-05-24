#include <stdio.h>
#include <stdlib.h>

int main ()
{
  double x1, y1, x2, y2, m, c;
  printf ("Find f(x):\n");
  printf ("f(");
  scanf ("%lf", &x1);
  printf (")=");
  scanf ("%lf", &y1);
  printf ("f(");
  scanf ("%lf", &x2);
  printf (")=");
  scanf ("%lf", &y2);
  m = (y2-y1)/(x2-x1);
  c = -(x1*m)+y1;
  printf ("f(x)=%lfx+%lf;\n", m, c);
  return EXIT_SUCCESS;
}
