// how break and continue works
/*
#include<stdio.h>

int main()
{
    int i, num ;

    printf("Enter a number");
    scanf("%d",&num);

    for (i=0; i<=10 ; i++)

    {
        if (i==5)
        {
            
            break;        
        }
        printf("\n%d",i);
    }
   
    return 0;
}  */


#include<stdio.h>

int main()
{
    int i, num ;

    printf("Enter a number");
    scanf("%d",&num);

    for (i=0; i<=10 ; i++)

    {
        if (i==5)
        {
            
            continue;        
        }
        printf("\n%d",i);
    }
   
    return 0;
}