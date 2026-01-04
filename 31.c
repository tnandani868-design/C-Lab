/*55555
  44444
  33333
  22222
  11111
*/
#include<stdio.h>

int main()
{
    int i, j;

    for (i=5; i>=1; i--)                // i=row   j=column
    {
        for (j=1; j<=5; j++)  
        // for (j=1; j>=5; j--)                         // j has no calculation so j = 1
        {
            printf("%d",i);
        }
        printf("\n");
    }
}