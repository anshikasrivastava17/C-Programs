/* 11111
   22222
   33333
   44444
   55555 */

#include <stdio.h>
int main ( )
{
  printf ("Enter terms\n");
  int n;
  scanf ("%d", &n);
  int a = 1;
  for (int i = 1; i <= n; i++)        //for rows
    {
      for (int j = 1; j <= n; j++)   //for columns
	{
	  printf ("%d ", a);
	}
      printf ("\n");
      a++;
    }
  return 0;
}
