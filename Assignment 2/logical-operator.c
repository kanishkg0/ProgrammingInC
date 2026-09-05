#include <stdio.h>

int main() {
    int a=5, b=2;

    printf("a>0 && b>0 = %d\n",(a > 0 && b > 0));
    printf("a>0 || b>0 = %d\n",(a > 0 || b > 0));
    printf("!(a>b) = %d",!(a > b));

return 0;
}