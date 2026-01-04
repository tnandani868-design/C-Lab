//Switch case
#include <stdio.h>

int main()
{
    int choice;
    int a, b;

    printf("Enter 1 for sum\n");
    printf("Enter 2 for diff\n");
    printf("Enter 3 for Mul\n");
    printf("Enter 4 for div: ");
    scanf("%d", &choice);

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case 1:
            printf("The sum of %d and %d is %d", a, b, a + b);
            break;

        case 2:
            printf("The difference of %d and %d is %d", a, b, a - b);
            break;

        case 3:
            printf("The product of %d and %d is %d", a, b, a * b);
            break;

        case 4:
            if (b != 0)
            {
                printf("The division of %d and %d is %.2f", a, b, (float)a / b);
            }
            else
            {
                printf("Division by zero is not allowed");
            }
            break;

        default:
            printf("\nInvalid choice");
    }

    return 0;
}





/*Enter 1 for sum
  Enter 2 for sub
  Enter 3 for Mul
  Enter 4 for div: 2
  
  Enter two numbers: 7   3
  The difference of 7 and 3 is 4*/

 // Differences between nested if else and Switch   important for exam 