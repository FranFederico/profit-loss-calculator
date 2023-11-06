#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float sp, bp, profit, loss;

    printf("Enter buying price: ");
    scanf("%f", &bp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if(sp > bp)
    {
        profit = sp - bp;
        printf("Profit = %.2f", profit);
    }

    else if(bp > sp)
    {
        loss = bp - sp;
        printf("Loss = %.2f", loss);
    }

    else
        printf("\nNo profit or loss.\n");


    return 0;
}
