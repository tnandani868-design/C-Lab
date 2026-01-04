//Rs 15 we have for chocolate rs 1 chocolate  give 3 rappers for extra 1 chocolate

#include<stdio.h>
#include<math.h>

int main()
{
    int money = 15;
    int price = 1;
    int wrappers_for_free = 3;

    int chocolates = money/ price ;  // Initial purchase
    int wrappers = chocolates;

    //Keep exchanging wrappers while we have enough

    while (wrappers >= wrappers_for_free)
    {
        int free_chocolates =wrappers / wrappers_for_free;
        int leftover_wrappers = wrappers % wrappers_for_free;

        chocolates += free_chocolates;
        wrappers = free_chocolates + leftover_wrappers;

        printf("Exchange %d wrappers for %d free chocolates\n",
         wrappers_for_free * free_chocolates, free_chocolates);

         printf("Total chocolates %d, Wrappers left: %d\n\n",chocolates, wrappers);

    }

    printf("Total chocolates you can eat: %d\n", chocolates);
    printf("Remaining wrappers: %d\n",wrappers);

    return 0;

}