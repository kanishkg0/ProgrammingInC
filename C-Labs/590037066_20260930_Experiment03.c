#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    printf("Enter a string word: ");
    scanf("%s",&str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        
    }
    printf("vowels=%d consonants=%d\n", vowels, consonants);

return 0;
}