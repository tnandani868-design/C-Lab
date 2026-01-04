// Count the no. of digits 
//Enter the num: 6431
//There are 4 digits in 6431

//FOR LOOP    (kati bela terminate bhayo bhane thaha xa bhane use for loop)
#include<stdio.h>

int main()

{
    int num , count=0, temp;  /*for loop ma  last ma xai num ko value 0 
                               bahyera niskinxa tara hamlai jun hamle suru ma input 
                               gareko no. chahinxa printf ma 
                               so hamle temp ma gayera pahila ko num ko value haleko*/
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;

    for (     ; num != 0; num=num/10)   //empty space is optional , i is also not needed
    {
        count++;
    }
    printf("\nThere are %d digits in %d", count, temp);
    return 0;
}