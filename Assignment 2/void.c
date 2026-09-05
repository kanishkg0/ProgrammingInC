#include <stdio.h>
#define MAX 100
int a = 50;         //Global declaration
void display(Void); //Function Prototype

int main() {

    printf("Hello\n");

    display(); //Call user function

return 0;
}

void display() {
    printf("My Name is Meximus Decimus Meridius");
}