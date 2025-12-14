#include<stdio.h>
#include<math.h>

int main()
{
    float a,b, result;
    printf("Enter the value of a and b");
    scanf("%f %f",&a,&b);
    result=pow(a,b);
    printf("The result is %f",result);
    return 0;

}
