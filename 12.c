//if else ladder use (Positive Negative or Zero)
#include<stdio.h>

int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive");
    }
    else if (num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("%d is Zero",num);
    }
    return 0;
}