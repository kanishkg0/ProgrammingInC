#include <stdio.h>

int main() {
    int a[5] = {0,-5,100,2,-7};
    int temp;

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    
    printf("Ascending order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nDescending order: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    
return 0;
}