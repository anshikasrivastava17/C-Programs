/*void swap(int *, int*)” swaps the two numbers using bitwise operator and displays them */

void swap (int *a, int *b)           
{
  *a = *a ^ *b;                              //swapping using bitwise operator
  *b = *a ^ *b;
  *a = *a ^ *b;
}
