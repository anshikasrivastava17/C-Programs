#include <stdio.h>
#include <math.h>
    int main()
   {
   printf("enter range");
   int n1,n2,i;
   scanf("%d%d",&n1,&n2);
       for(i=n1; i<=n2; i++)
      {
           int k=i,c=0;
         while(k!=0)          //calculates digits in a number
        {
        int r = k % 10;
        c++;
        k = k / 10;
        }
          int k2=i,sum=0;
      while(k2!=0)
   {
   int r=k2%10;
   int p= ((int)pow(r,c));     //generates power
   sum=sum+p;
    int k2=k2/10;
  }
if(sum==i)             //comparing to check if numbers match
printf("%d \n",i);
}
return 0;
}
