//WHILE LOOP
//WAP to Count the no. of digits

// terminate hune thaha xaina bhane use while loop 

#include<stdio.h>

int main()
{
    int num, count=0, temp;

    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    while(num !=0)
    {
        num= num/10;
        count ++;
    }
    printf("\nThere are %d digits in %d number",count,temp);
    return 0;

}