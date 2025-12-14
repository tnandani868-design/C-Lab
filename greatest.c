//Greatest among three integers
#include<stdio.h>

int main()
{
    int num1, num2, num3, largest;
    printf("Enter three integers");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest = (num1 > num2) ? num1 : num2;
    if (num3 > largest)
    {
        printf("\nLargest=%d", num3);

    }
    else
    {
        printf("\nLargest=%d",largest);
    }
    return 0;
}
