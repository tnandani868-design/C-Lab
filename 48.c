// 1+x+x^3+.....x^n

#include<stdio.h>
#include<math.h>

int main()

{
   int x, n, i, sum=1;
   
   printf("Enter the value of x and n");
   scanf("%d %d",&x, &n);
   for (i=1; i<=n; i=i+2)
   {
    sum=sum+ pow(x,i);
   }
   printf("\nsum=%d", sum);
   return 0;

}