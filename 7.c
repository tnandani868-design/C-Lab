//ordinary characters
#include<stdio.h>

int main()
{
    int day,month, year;
    printf("Enter date in the format DD-MM-YYYY");
    scanf("%d-%d-%d",&day,&month,&year);
    //Here('-' are ordinary characters.User MUST type '-' in input)
    printf("Day=%d\n",day);
    printf("Month=%d\n",month);
    printf("Year=%d\n",year);
    return 0;
}