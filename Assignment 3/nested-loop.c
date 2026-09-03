#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++) // The outer for loop controls the rows
    {
        for (j = 1; j <= i; j++) //The inner for loop controls how many * are printed in each row
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}