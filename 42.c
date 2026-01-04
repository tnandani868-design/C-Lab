// bring output 

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter sentence:");
   
    do
    {
       scanf ("%c",&ch);
       if (ch!='X')
        {
            printf("%c",ch);
        }

    } while(ch !='X');

    return 0;
}