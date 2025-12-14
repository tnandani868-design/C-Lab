// how scanf() working if whitespace or not
#include<stdio.h>

int main()
{
    char a,b;
    printf("enter character");
    scanf("%c %c",&a,&b);
    printf("\na=%c and b=%c");
    return 0;

}