/*
*
**
***
****
*****
*/


#include<stdio.h>

int main()
{
    int i, j;

    for (i=1; i<=5; i++)                // i=row   j=column
    {
        for (j=1; j<=i; j++)    /* j<=5 means sabai boxes ma print hunu paro but 
                                   j<=i means i =3 bhayo bhane 3 oota box ma print 
                                   hunxa and 2 oota skip hunxa*/
        {
            printf("*");
        }
        printf("\n");
    }
}