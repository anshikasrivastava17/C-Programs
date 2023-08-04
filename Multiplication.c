#include<stdio.h>
int main( )
{
int i=0,m=0;
printf("Enter 2 numbers who have to be multiplied together");
int a,b;
scanf("%d \n %d", &a,&b);
for(i=1;i<=b;i++)   //to add number ‘a’, b times
{
m=m+a;
}
printf("%d",m);
return 0;
}
