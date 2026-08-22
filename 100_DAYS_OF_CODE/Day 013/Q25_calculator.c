//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a,b;//a and b are number input 
    char op;//op is operator input

    printf("First enter two numbers and then enter operator: ");
    scanf("%d %d %c",&a,&b,&op);

    switch (op)
    {
    case '+':
        printf("%d",a + b);
        break;
    case '-':
        printf("%d",a - b);
        break;
    case '*':
        printf("%d",a * b);
        break;
    case '/':
        printf("%d",a / b);
        break;
    case '%':
        printf("%d",a % b);
        break;
    
    default:
        printf("Operator invalid");
        break;
    }

return 0;

}