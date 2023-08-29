/*WAP to check whether given number is prime or not, using recursion*/

#include<stdio.h>
int prime(int n,int i)
{
    if(n%i==0)
    return 0;
    if(i==n-1)
    return 1;
    else
    prime(n,++i);
}
int main()
{
    printf("Enter number to be checked ");
    int n;
    scanf("%d",&n);
    int i=2;
    int result = prime(n,i);
    if(n==2|| result==1)
    printf("Prime number");
    else
    printf("Not Prime number");
}
