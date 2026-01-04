//WAP to print the following series until user wants series:
// 1, 4, 9, 16,........

#include<stdio.h>

int main()
{
    int i = 1;
    char choice; 
    printf("The series is \n");

    do
    {
        printf("%d\t",i*i);
        i++;
        printf("\n Do you want to continue(y/n)?");
        scanf(" %c",&choice);   //white space after %c is needed cuz it brings enter down again as we hv pressed enter previously

    } while (choice != 'n'); //(choice =='n')
    return 0;
    

}


//Using For-loop

/*
#include<stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 4; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}

*/