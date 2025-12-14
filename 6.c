//how scanf() is used
#include<stdio.h>

int main()
{
    int a,b;
    char ch;

    printf("Enter a single character(leading white spaces allowed):");
    scanf("%c",&ch);               //leading space consumes leftover newline
    printf("Enter two integers seperated by any spaces:");
    scanf("%d %d", &a, &b);        //space between %d tells scanf to skip whitespace

    printf("\nYou entered:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%c\n",ch);
    return 0;


}