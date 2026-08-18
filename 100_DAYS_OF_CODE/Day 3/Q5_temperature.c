//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int c; //c = celcius
    float f; //f = fahrenheit

    printf("Enter the value of temperature in celcius : ");
    scanf("%d",&c);

    f = (c * 9/5) + 32;

    printf("Fahrenheit=%f",f);

return 0;
}