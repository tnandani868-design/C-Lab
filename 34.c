/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)          // rows
    {
        for (j = 1; j <= i; j++)      // columns
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
