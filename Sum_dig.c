#include <stdio.h>
int main ( )
{
  printf ("enter number\n");
  int n;
  scanf ("%d", &n);
  int sum = 0;
  while (n != 0)   //to ensure all digits have been added
    {
      int r = n % 10;      //extract the digits
      sum = sum + r;
      n = n / 10;
    }
  printf ("sum of digits= %d", sum);
  return 0;
}
