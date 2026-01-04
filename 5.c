//ask user roll no, gender, name, marks
//escape sequence  \n = newline  \t = tab

#include<stdio.h>

int main()
{
    int roll;
    char gender;
    char name[200];
    float marks;
    
    printf("Enter ROLL:");
    scanf("%d",&roll);
    printf("Enter GENDER:");
    scanf(" %c",&gender);
    printf("Enter NAME:");
    scanf(" %[^\n]s ",&name);
    printf("Enter MARKS:");
    scanf("%f",&marks);
    
    printf("\nROLL=%d",roll);
    printf("\nGENDER=%c",gender);
    printf("\nNAME=%s",name);
    printf("\nMARKS=%.2f",marks);
    return 0;
}