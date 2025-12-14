//Salary increment according to how much the working year is 
#include<stdio.h>

int main()
{
    float salary;
    int year;
    printf("Enter your salary");
    scanf("%f",&salary);
    printf("\nEnter your working year");
    scanf("%d",&year);
    if(year >=2)
    {
        salary=salary*0.1+salary;
        //salary +=0.1*salary

    }
    printf("\n Your salary is %.2f",salary);
    return 0;
}