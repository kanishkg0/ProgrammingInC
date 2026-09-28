//logical calcu$ator in C 
//Author: KANISHK GARG
//Date: 25-09-2026
//Time: 2:26 PM

#include <stdio.h>

int main() {
    float a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    printf("Enter an operator: ");
    scanf("%s",&op);

    switch (op) {
        
        case '+':
        printf("%.2f + %.2f = %.2f",a,b,a+b);
        break;

        case '-':
        printf("%.2f - %.2f = %.2f",a,b,a-b);
        break;

        case '*':
        printf("%.2f * %.2f = %.2f",a,b,a*b);
        break;

        case '/':
            if (b != 0.0) {
                printf("%.2f / %.2f = %.2f",a,b,a/b);
            } else {
                printf("Division by zero is not allowed.");
            }
        break;

        case '>':
        printf("%.2f > %.2f = %d", a, b, a > b);
        break;

        case '<':
        printf("%.2f < %.2f = %d", a, b, a < b);
        break;
    
    default:
            printf("Invalid operator");
        break;
    }

return 0;
}