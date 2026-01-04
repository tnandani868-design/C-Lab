//Control statement
//if else ladder

#include<stdio.h>

int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    
    if (num>0)
    {
        printf("\n%d is positive",num);
    }
    else if(num<0)
    {
        printf("\n%d is negative",num);
    }
    else
    {
        printf("\n%d is Zero",num);
    }
    return 0;
}
