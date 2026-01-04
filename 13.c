//Nested if else

#include<stdio.h>

int main()
{
    int num1, num2, num3;
    char choice;

    printf("\nEnter + for Addition \nEnter - for Subtraction \nEnter * for Multiplication \nEnter / for Division");
    scanf("%c",&choice);

    //if(choice != '+'&& choice != '-'&& choice != '*'&& choice != '/')
    if(!(choice == '+'|| choice == '-'|| choice == '*'|| choice == '/'))
    //if (choice == '+' || choice == '-' || choice == '*' || choice == '/')

    //!=  can be used 
    //== can also be used
    //  || is OR 
    {
        printf("\nInvalid Choice");
        return -1;
    }

    printf("\nEnter two numbers");
    scanf("%d %d",&num1,&num2);

    if(choice == '+' )
    {
        printf("\nThe addition of %d and %d is %d", num1, num2, num1+num2);
    }

    else if (choice == '-')
    {
         printf("\nThe subtraction of %d and %d is %d", num1, num2, num1-num2);
    }

    else if (choice == '*')
    {
         printf("\nThe multiplication of %d and %d is %d", num1, num2, num1*num2);
    }

    else
    {
        if (num2 == 0)
        {
            printf("\nDivide by zero is not possible");

        }
        else 
        {
            printf("\nThe division of %d and %d is %f", num1, num2, (float)num1/num2); //asked question // Explicit Type Conversion= user le paxi gayera datatype change garna bhannu parne
                                                                                 // Implicit Type Conversion= compliler affai garne
        }

    }

}

/* if (FALSE AND TRUE AND FALSE AND FALSE)
       (FALSE AND FALSE)               (All TRUE)
       (FALSE)
       
    if (T||F||F||F)
        (!T)          ( only one true is enough)
         (F)*/

/*
Ariane 5 Launcher 1996 ma launch gareko thyo ani float lai int ma change 
garexan and it changed its trajectory and it got blast.                           x=(int)7.5
*/
