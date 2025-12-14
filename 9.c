//use of fflush(stdin)
#include<stdio.h>

int main()
{
    int num;
    char ch;
    float price;

    printf("Enter a number, a charater, and a price:\n");
    scanf("%3d ",&num);
    fflush(stdin);       // fflush(stdin)  to clear the buffer  
    scanf("%1c ",&ch);
    scanf("%5f ",&price);
    //%3d = reads up to 3 digits only
    //%1c = reads exactly 1 character
    //%5f = reads upto 5 characters of the float

    printf("\nYou entered:\n");
    printf("Integer = %d\n", num);
    printf("Character = %c\n", ch);
    printf("Float = %f\n", price);
    return 0;
}

