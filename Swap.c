#include <stdio.h>
int main( )
{ 
    printf("enter two numbers to be swapped");
    int a,b;
scanf("%d %d",&a,&b);
    printf("i.swap using third variable \n ii. swap without third variable \n");
    printf("enter choice");
    int c;
    scanf("%d",&c);
    switch(c)
    {
        case 1:     //using third variable
printf("before swapping a is %d and b is %d \n", a,b);
int c=a;
a=b;
b=c;
printf("after swapping a is %d and b is %d",a,b);
break;
       case 2:     //without using third variable
printf("before swapping a is %d and b is %d", a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping a is %d and b is %d",a,b);
break;
default:
printf("invalid choice");
}
return 0;
}
