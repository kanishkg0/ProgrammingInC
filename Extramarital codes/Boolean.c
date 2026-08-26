#include <stdio.h>
#include <stdbool.h>

int main() {
        printf("Size of int = %zu bytes\n", sizeof(int));
        printf("Size of short = %zu bytes\n", sizeof(short));
        printf("Size of long = %zu bytes\n", sizeof(long));
        printf("Size of char = %zu byte\n", sizeof(char)); // Always 1
    _Bool boolVar = 0;
    _Bool boolVar1 = 10;
    _Bool boolVar2 = -50;
        printf ("boolVar = %i\n", boolVar);
        printf ("boolVar1 = %i\n", boolVar1);
        printf ("boolVar2 = %i\n", boolVar2);
        printf("Size of bool = %zu bytes\n", sizeof(_Bool));
return 0;
}