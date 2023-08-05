#include <stdio.h>
int main ( )
{
  printf ("Enter terms\n");
  int n;
  scanf ("%d", &n);
  double sum = 0;
  for (double i = 1; i <= n; i++)
    {
      sum = sum + 1 / i;     //adds the terms generated
    }
  printf ("%f", sum);
  return 0;
}
