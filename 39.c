//Reverse of digits using while loop

#include<stdio.h>

int main()
{
    int num, rem, temp, rev=0;

    printf("Enter number");
    scanf("%d",&num);
    
    temp = num;

    while(num!=0)
    {
         rem = num % 10;
         rev= rev*10 + rem;
         num = num / 10; 
          
    }
    printf("\nThe reverse of %d is %d",temp,rev);
    return 0;
}