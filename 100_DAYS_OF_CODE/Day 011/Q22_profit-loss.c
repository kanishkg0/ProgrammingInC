//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percentage; // cp = cost price , sp  = selling price

    printf("Enter cost price and selling price: ");
    scanf("%f %f",&cp,&sp);

    if (cp == sp)
    {
        printf("No Profit No Loss");
    }
    else if (cp > sp)
    {
        percentage = ((cp - sp)/cp)*100 ;
        printf("Loss %.2f%%",percentage);
    }
    else
    {
        percentage = ((sp - cp)/cp)*100 ;
        printf("Profit %.2f%%",percentage);
    }
    
}