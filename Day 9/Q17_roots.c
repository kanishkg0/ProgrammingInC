//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    float root1,root2,D; //y = ax^2 + bx + c

    printf("Enter values of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);

    D = b*b - 4*a*c;

    if (D > 0)
    {
        root1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
        root2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f",root1,root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2*a);
        printf("Roots are real and same: %.2f",root1);

    }
    else
    {
        printf("Roots are complex");
    }
    
return 0;
}