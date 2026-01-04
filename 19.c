/*WAP to find a year if it is leap year or not
HINT:  A year is leap year if 
a) It is divisible by 4 AND
b) Either not divisible by 100 or divisible by 400*/

//IMPORTANT Question
#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",year);
    if ((year%4 ==0 && year%100 !=0)|| (year%400 ==0))
    {
        printf("\n %d is a leap year",year);
    }
    else
    {
        printf("\n %d is not a leap year",year);
    }
    return 0;


}