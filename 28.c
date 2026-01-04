//FOR LOOP
//Nested if
/*   *****
     *****
     *****
     *****
     *****
*/                      // if u need gap then keep white space or also u can keep \t

#include<stdio.h>

int main()
{
    int i, j;

    for (i=1; i<=5; i++)                // i=row   j=column
    {
        for (j=1; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}