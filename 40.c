// Palindrome or not using while loop

#include<stdio.h>

int main()
{
    int num, rem, temp, rev=0;

    printf("Enter number");
    scanf("%d",&num);
    
    temp = num;

    while(num!=0)
    {
         rem = num % 10;  //get last digit
         rev= rev*10 + rem; //reverse the number
         num = num / 10;  //removes the last digit
          
    }
    if (temp == rev)
    {
        printf("\n %d is a Palindrome number",temp);
    }
    else
    {
        printf("\n %d is not a Palindrome number",temp);
    }
    
    return 0;
}
