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



/*
12345
1234
123
12
1
*/

/*
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 5; i >= 1; i--) {
        // Inner loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // move to next row
    }

    return 0;
}
    */

