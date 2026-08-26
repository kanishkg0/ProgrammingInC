#include <stdio.h>

int main() {
int a = 1, b = 6, result1, result2 ;
result1 = a-- && ++b;
printf("%d %d %d", result1, a, b); //result1=1, a = 0, b = 7
int a = 1, b = 6;
result2= --a && ++b;
printf("\n%d %d %d", result2, a, b); //result2=0, a = 0, b = 6

return 0;
}