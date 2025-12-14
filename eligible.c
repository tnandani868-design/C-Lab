// Eligible to vote or not
#include<stdio.h>

int main()
{
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\nEligible to vote");
    }
    else {
        printf("\nNot Eligible to vote ");
    }

    return 0;

}