//Nested if else
// largest among 3 integers

#include<stdio.h>

int main()
{
    int num1, num2, num3, greatest;

    printf("Enter three integers:");
    scanf("%d %d %d", &num1, &num2,&num3);

    if(num1>num2)
    {
       if(num1>num3)
       {
        printf("\n%d is largest",num1);
       }
       else
       {
        printf("\n%d is largest",num3);
       }
    }

    if (num2>num3)
    {
        if(num2>num1)
        {
            printf("\n%d is largest",num2);
        }
        else 
        {
            printf("\n%d is largest",num1);
        }
    }
    return 0;
}