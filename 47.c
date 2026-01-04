//WAP to sum the user input. The program must take user input until use input 0
// using exit control loop(Do while)
#include<stdio.h>

int main()
{
    int num,sum=0;
 
   
    do
    {
       printf("Enter number(Enter 0 to stop):");
       scanf ("%d",&num);
       sum=sum+num;
    }
     while(num !=0);
    printf("\nThe sum is %d",sum);
    return 0;
}


/*
 while (num !=0);
 {
 printf("Enter number(Enter 0 to stop):");
       scanf ("%d",&num);
       sum=sum+num;
 }
        printf("\nThe sum is %d",sum);
        */

/*
     for (    ;num !=0 )*/