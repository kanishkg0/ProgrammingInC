//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    int r;   //r = radius;
    float area,circum;

    printf("Enter radius for circle : ");
    scanf("%d",&r);

    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;

    printf("Area=%f, Circumference=%f",area,circum);

return 0;
}