#include <stdio.h>
int main( )
{
printf("Enter the temperature in celsius");
float temp;
scanf("%f",&temp);
float fah=(temp * (9.0/5.0))+32.0;  //convert    C to F
printf("\n temperature in fahrenheit is %f",fah);
printf("\n temperature in  kelvin is %f",temp+273.0);
                                    // +273converts to kelvin
return 0;
}
