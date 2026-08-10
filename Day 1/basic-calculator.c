//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int x,y,sum,diff,product,quotient;
    printf("Enter two numbers x and y : ");
    scanf("%d %d",&x,&y);

    sum = x + y;
    diff = x - y;
    product = x * y;
    quotient = x / y;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",sum,diff,product,quotient);

return 0;
}