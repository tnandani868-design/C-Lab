//FOR LOOP
//Sum upto nth terms

//sum = 1+2+3+........+n

#include<stdio.h>

int main()
{
    int n , i, sum=0;    //sum = 0 because anything added to 0 is remains same if we dont then there comes garbagge value 

    printf("Enter value of n",n);
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        sum = sum+i;

    }
    printf("Sum = %d",sum);
    return 0;

}