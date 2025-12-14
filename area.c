//area of circle
#include<stdio.h>

int main()
{
    float radius;
    const float Pi=3.14;
    float area;
    printf("Enter radius:");
    scanf("%f",&radius);
    area= Pi*radius*radius;
    printf("\n area of circle is %.2f",area);
    return 0;

    
}
