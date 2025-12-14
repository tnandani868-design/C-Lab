//invalid age

#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<0)  // using < only 
    {
        printf("\nInvalid age");
        return-1;
    }
    printf("\n Your age is %d",age);
    return 0;
}