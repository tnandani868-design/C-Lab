/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)          // rows: 5 to 1
    {
        for (j = 1; j <= 6 - i; j++)  // number of columns
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
