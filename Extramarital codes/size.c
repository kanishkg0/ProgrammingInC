#include <stdio.h>

int main() {
    int a;
    printf("Size of int = %zu bytes\n",sizeof(int));
    printf("Size of int_a = %zu bytes\n",sizeof(a));
    printf("Size of short = %zu bytes\n",sizeof(short));
    printf("Size of long = %zu bytes\n",sizeof(long));
    printf("Size of char = %zubyte\n",sizeof(char));

    _Bool boolVar = 0;
    _Bool boolVar1 = 10;
    _Bool boolVar2 = -50;
    printf("boolVar = %i\n",boolVar);
    printf("boolVar1 = %i\n",boolVar1);
    printf("boolVar2 = %i\n",boolVar2);
    printf("Size of bool = %zu bytes\n",sizeof(_Bool));
}