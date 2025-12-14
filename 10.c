//Full name print 
#include<stdio.h>

int main()
{
    char name[100];
    printf("Enter your name");
    scanf("%[^\n]s",&name); /* if we keep %s only instead of %[^\n]s then 
    it only will print our first name if we keep then it gives full name */

    printf("\nMy name is %s",name);
    return 0;

}