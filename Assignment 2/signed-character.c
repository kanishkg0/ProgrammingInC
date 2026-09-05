#include <stdio.h>

int main() {
    signed char sc = 200; // 200 is outside signed range (−128 to 127)

    printf("signed char = %d\n", sc); // Will print a negative number (wrap-around)

return 0;
}