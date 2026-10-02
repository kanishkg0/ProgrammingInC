/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of 
all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the 
pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most 
one pivot integer for the given input.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int pivot = -1;

    for (int x = 1; x <= n; x++)
    {
        int rightSum = 0;
        int leftSum = 0;

        for (int j = 1; j <= x; j++)
        {
            leftSum += j;
        }

        for (int j = x; j <= n; j++)
        {
            rightSum += j;
        }
        
        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
        
    }

    printf("Pivot number = %d\n", pivot);

return 0;    
}