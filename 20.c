/*WAP to convert temperature in Celsius to Fahrenheit*/

#include<stdio.h>

int main()
{
    float Celsius,Fahrenheit;
    printf("Enter temperature in Celsius");
    scanf("%f",&Celsius);
    Fahrenheit=(Celsius*1.8)+32;       //9/5 = 1.8
    
    printf("\n %.2f is in Fahrenheit",Fahrenheit);
    return 0;
}