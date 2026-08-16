//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any keyword : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else if (ch == ' ')
    {
        printf("Space");
    }
    else
    {
        printf("Special Character");
    }
    
return 0;   
    
}