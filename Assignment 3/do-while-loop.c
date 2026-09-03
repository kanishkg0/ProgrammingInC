#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        printf("You entered: %d\n", n);

    } while (n != 0);

    return 0;
}