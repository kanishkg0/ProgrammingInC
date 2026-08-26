#include <stdio.h>
int main() {
int a = 10, b = 5, result;
result = (a > b) && a++;
printf("%d", result); //result = 1
printf("\n%d\n", a); // a = 11

printf("%d", result); // prints 1
printf("\n%d", a); // prints 10
return 0;
}

