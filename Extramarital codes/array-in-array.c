#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n], b[n];

    printf("Enter elements of matrix a: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //Assigning values in b

    for (int i = 0; i < n; i++)
    {
        b[i] = a[n-i-1];
    }

    printf("Elements of matrix b are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
return 0;    
}