#include <stdio.h>

int num = 50; //Global variable declared outside all the functions

void display() {

    //Global variable can be accessed inside display function
    printf("Global variable inside the display() = %d\n",num);
}

int main() {

    //Global variable can be accessed inside main function
    printf("Global variable inside the main() = %d\n",num);
    display();
    
return 0;
}