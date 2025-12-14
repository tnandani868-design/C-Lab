// Greatest among three in next way
#include<stdio.h>

int main()
{
    int num1, num2, num3, largest;
    printf("Enter three integers");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest = (num1 > num2) ? num1 : num2;
if(num1>num2&& num1>num3)
{
    printf("\n%d is largest", num1);

}
if(num2>num1 && num2>num3)
{
    printf("\n %d is largest", num2);
}
if (num3> num1 && num3>num2)
{
    printf("\n %d is largest", num3);
}
 return 0;
}
