//Prime or not 
#include<stdio.h>

int main()
{
    int i, num, flag=0;

    printf("Enter a number");
    scanf("%d",&num);

    for (i=2; i<= num/2 ; i++)

    {
        if (num%i==0)
        {
            flag=1;    
            break;          // flag ko value change bhayo bhane prime hudaina
        }
    }
    if (flag==0)
    {
        printf("\n%d is prime number",num);
    }
    else
    {
        printf("\n%d is not prime number",num);
    }
   
    return 0;
}