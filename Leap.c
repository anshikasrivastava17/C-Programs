#include<stdio.h>
int main()
{
printf("enter the year");
int y;
scanf("%d",&y);
if(y%100==0)      //for century year
{
if(y%400==0)
printf("leap year");
else
printf("not a leap year");
}
else{
if(y%4==0)
printf("leap");
else
printf("not leap");
}
return 0;
}
