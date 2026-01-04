//do while loop
// 1 to 100 print even no. using do while loop
#include<stdio.h>

int main()
{
    int i=2;
    do                      //for(i=2; i<=100; i=i+2)
    {
        printf(" \t %d",i);               
        i=i+2;

    } while (i<=100);

    return 0;
    
}

/*
     do 
     { 
         if (i%2==0)
         {
         printf("\n%d",i);
         }
         i++;
     } while (i<=100);
       return 0;
                             */