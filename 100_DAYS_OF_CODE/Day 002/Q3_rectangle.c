//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int l,b,area,peri;    //l = length,b = breadth
    printf("Enter length and breadth of rectangle : ");
    scanf("%d %d",&l,&b);

    area = l * b;
    peri = 2 * (l + b);

    printf("Area=%d, Peimeter=%d",area,peri);

return 0;
}