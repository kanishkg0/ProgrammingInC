#include <stdio.h>

int main() {
    int num, temp, n = 0;
    int arr[20];

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        arr[n] = temp % 10;
        temp = temp / 10;
        n++;
    }

    int isPalindrome = 1; 

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("Array is a palindrome.\n");
    } else {
        printf("Array is NOT a palindrome.\n");
    }

return 0;
}