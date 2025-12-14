//Addition Substraction Multiplication Division
//menu driven code
#include<stdio.h>

int main()
{
    int num1,num2,choice;
    printf("Enter two numbers:");
    scanf("%d %d",&num1 ,&num2);
    printf("\n\t\tMENU");
    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 for Subtraction");
    printf("\nEnter 3 for Multiplication");
    printf("\nEnter 4 for Division");
    scanf("%d",&choice);
    if (choice ==1)  //in if never one = always there will be ==
    {
        printf("\nThe addition of %d and %d is %d", num1,num2,num1+num2);
    }
    else if (choice==2)  
    {
        printf("\nThe subtraction of %d and %d is %d", num1,num2,num1-num2);
    }
    else if (choice==3)
    {  
        printf("\nThe multiplication of %d and %d is %d", num1,num2,num1*num2);
    }
    else if (choice==4 && num2 !=0)
    {
        printf("\nThe division of %d and %d is %f", num1,num2,(float)num1/num2);
    }
    else
    {
        printf("\nInvalid Input");
    }

    return 0;
}