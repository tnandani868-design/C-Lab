// Sum of digits  using while loop 

#include<stdio.h>

int main()
{
    int num, rem, sum=0;

    printf("Enter number");
    scanf("%d",&num);

    while(num!=0)
    {
         rem = num % 10; // gives last digit
         sum=sum +rem;   //add digits to sum
         num = num / 10; // removes the last no.
          
    }
    printf("sum of digits=%d",sum);
    return 0;
}