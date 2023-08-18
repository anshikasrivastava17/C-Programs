/* Find sum of all array elements using recursion. */

#include<stdio.h>
int summation (int arr[], int n); 
int main ( )
{
  int n;
  printf ("enter array size \n");
  scanf ("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  int sum = 0;
  sum = summation (arr, n);
  printf ("sum= %d", sum);
  return 0;
}

int summation (int *arr, int n)
{
  if (n == 0)                    
    return arr[0];
  else
    {
     
      return arr[n] + summation (arr, (n - 1));
    }
}
