#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if (n < 0)
    {
        n = -n;
        printf("Absolute number = %d",n);
    }
    else
    {
        printf("Absolute number = %d",n);
    }
    
return 0;    
}