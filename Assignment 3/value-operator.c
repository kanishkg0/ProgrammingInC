#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter num, operator and num: ");
    scanf("%d %c %d",&num1,&op,&num2);

    switch (op)
    {
    case '+': result = num1 + num2; printf("Sum is %d",result); break;
    case '-': result = num1 - num2; printf("Diff is %d",result); break;
    case '*': result = num1 * num2; printf("Product is %d",result); break;
    case '/': result = num1 / num2; printf("Quotient is %d",result); break;
    case '%': result = num1 % num2; printf("Remainder is %d",result); break;
    
    default: printf("Invalid Operator"); break;
    }

return 0;
}