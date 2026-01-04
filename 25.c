//Factorial  n!

#include<stdio.h>

int main()
{
    int n, i;

    long fact =1;

    printf("Enter the value of n");
    scanf("%d",&n);

    for (i=1; i<=n; i++)  
    //for (i=n; i>=1; i--)
    {
        fact = fact *i;
    }
    printf("\nThe factorial of %d is %ld",n,fact);  // dont forget n else it goes garbage value
    return 0;
}