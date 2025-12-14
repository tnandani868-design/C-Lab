//width in float datatype
#include<stdio.h>

int main()
{
    float num=12.3456;
    printf("\n%7.4f",num);
    printf("\n%7.2f",num);
    printf("\n%-7.2f",num);
    printf("\n%7.2f",-num);
    printf("\n%6.4f",num); //%6.4f doesnot work 
    printf("\n%10.2f",num);
    printf("\n%-10.2e",num);
    printf("\n%10.2e",-num);

}