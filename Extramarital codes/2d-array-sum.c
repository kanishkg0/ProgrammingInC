#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&rows,&columns);

    int a[rows][columns], b[rows][columns], c[rows][columns];

    printf("Enter elements of first array: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter elements of second array: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }

    printf("Resultant array c is: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

return 0;
}