//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    int p,r,t; //p = principal, r = rate, t = time
    int si; //si = simple interest
    float ci; //ci = compound interest

    printf("Enter the values of p,r,t : ");
    scanf("%d %d %d",&p,&r,&t);

    si = (p * r * t) / 100;
    ci = p * (pow((1 + r/100.0),t) - 1);

    printf("Simple Interest=%d, Compound Interest=%.2f",si,ci);

return 0;
}