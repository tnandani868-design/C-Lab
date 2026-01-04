//Control Statement

//if else

#include<stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\nUser is Eligible to vote");
    }
    else
    {
        printf("\nUser is Not Eligible to vote");
    }
    return 0;
}