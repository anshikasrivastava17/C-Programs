void coprime (int n)
{
  int rev = 0, n1 = n, k = n, c = 0;
  while (k != 0)		//number of digits
    {
      c++;
      k /= 10;
    }
  while (n1 != 0)		//reverse of number
    {
      int r = n1 % 10;
      rev = rev + r * (int) pow (10, - -c);
      n1 /= 10;
    }
  printf ("reverse of number is %d\n", rev);
  while (rev != 0)
    {
      int r = n % rev;
      n = rev;
      rev = r;
    }
  printf ("hcf is %d\n", n);
  if (n == 1)
    printf ("numbers are coprime\n");
  else
    printf ("not coprime");
}
