//Salary increment done by pv
#include <stdio.h>

int main() 
{
    float increment, percent, salary, w_year;
    printf("Enter the Salary of the Employee: ");
    scanf("%f", &salary);
    printf("Enter the Working Year of the Employee: ");
    scanf("%f", &w_year);
    percent=salary*(w_year/100);
    increment=salary+percent;
    printf("Employee Salary = %.2f", increment);
    return 0;

}