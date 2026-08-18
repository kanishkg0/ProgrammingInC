//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a,b,c; // a,b,c are sides of a triangle

    printf("Enter values of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a == b && b == c)
    {
        printf("Equilateral");
    }
    else if (a == b && b != c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

return 0;
    
}