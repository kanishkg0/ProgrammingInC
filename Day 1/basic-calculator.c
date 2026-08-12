//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int x,y,sum,diff,product,quotient;
    printf("Enter two numbers x and y : ");
    scanf("%d %d",&x,&y);

    sum = x + y;
    diff = x - y;
    product = x * y;
    //quotient = x / y;

    //printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",sum,diff,product,quotient);
    printf("Sum=%d, Diff=%d, Product=%d, ",sum,diff,product);


    if (y == 0)
    {
        printf("Cannot divide by 0");
    }
    else
    {
        quotient = x / y;
        printf("Quotient=%d",quotient);
    }
    
    

return 0;
}