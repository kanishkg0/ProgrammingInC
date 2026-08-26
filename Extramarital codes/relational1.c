#include <stdio.h>
int main() {
int a = 18, b = 9, c;
printf("a < b = %d\n", a < b); // 0
printf("a > b = %d\n", a > b); // 1
printf("a == b = %d\n", a == b); // 0
printf("a != b = %d\n", a != b); // 1
printf("'A' < 'B' = %d\n", 'A' < 'B'); // 1
printf(" (3 + 5) < (5 + 5) = %d\n", (3 + 5) < (5 + 5)); // 8 < 10 -> 1
printf(" (a + b) < (b + c) = %d\n", (a + b) < (b + c));
return 0;
}