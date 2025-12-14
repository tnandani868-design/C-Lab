#include<stdio.h>
//print the last digit is 7
int main()
{
    int num, last_digit;
    printf("Enter an integer");
    scanf("%d",&num);
    last_digit=num%10;
    printf("\nThe last digit in %d is %d",num, last_digit);
    return 0;
}