//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    int arr[n];

    //first define array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    
    //since array is defined now define the loop for printing numbers
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

return 0;   
    
}
