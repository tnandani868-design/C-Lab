//ask user roll no, gender, name, marks
//escape sequence  \n = newline  \t = tab

#include<stdio.h>

int main()
{
    int roll;
    char gender;
    char name[100];
    float marks;
    
    printf("Enter ROLL:");
    scanf("%d",&roll);
    printf("Enter GENDER:");
    scanf(" %c",&gender);
    printf("Enter NAME:");
    scanf(" %[^\n]s ",&name);
    printf("Enter MARKS:");
    scanf("%f ",&marks);
    
    printf("ROLL=%d",roll);
    printf("\nGENDER=%c",gender);
    printf("NAME=%[^\n]s",name);
    printf("MARKS=%d",marks);
    return 0;
}