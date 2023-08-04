#include <stdio.h>
int main( )
{
printf("enter the number of days");
int days;
scanf("%d",&days);
if(days<365)        //1 year = 365 days
printf("not a complete year");
else
printf("number of years %d ",days/365);   
int m= (days-365)/30;        //to find number of months
int d=(days-365)%30;        //to find number of days
printf("months %d and remaining days is %d",m,d);
return 0;
}
