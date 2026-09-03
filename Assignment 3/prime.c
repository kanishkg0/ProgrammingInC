#include <stdio.h>

int main() {
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) 
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n <= 1)
        printf("Not a prime number");
    else if (flag == 0)
        printf("Prime number");
    else
        printf("Not a prime number");

return 0;   
}