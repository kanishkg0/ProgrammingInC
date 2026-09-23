#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n], b[n], c[n];

    printf("Enter elements for matrix a: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter elements for matrix b: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Resultant array c is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",c[i]);
    }

return 0;    
}