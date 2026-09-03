#include <stdio.h>

// Function to determine the sign of a number
int getSign(int x) {
    if (x > 0) {
        return 1;   // Positive
    } 
    else if (x < 0) {
        return -1;  // Negative
    } 
    else {
        return 0;   // Zero
    }
}

int main() {
    int number = -25;
    int result = getSign(number);
    
    printf("The sign of %d is: %d\n", number, result);
    
    return 0;
}
