// width in string datatype
#include<stdio.h>

int main()
{
    char str[] = "C PROGRAM";
    printf("%s",str);
    printf("\n%10s",str);
    printf("\n%10.6s",str);
    printf("\n%.4s",str);
    printf("\n%-10.6s",str);
    printf("\n%4s",str);  //it neads minimum 9 so if it's less then it won't work
    return 0;

}