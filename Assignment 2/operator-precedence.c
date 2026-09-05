#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;

    int result1 = a + b * c;
    int result2 = (a + b) * c;

    printf("a + b * c = %d\n", result1); //First * will take place and then + will
    printf("(a + b) * c = %d\n", result2); //First () will take place and then * will

return 0;
}