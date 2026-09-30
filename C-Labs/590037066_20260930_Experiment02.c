#include <stdio.h>
#include <string.h>

int main() {
    char name1[1000] = "KANISHK";
    char name2[1000];
    char name3[1000] = "DHRITI";
    
    printf("Length= %d\n",strlen(name1));
    printf("Copying name1 to name2= %s\n", strcpy(name2,name1));
    printf("Comparing= %d\n",strcmp(name1,name2));
    printf("Catenation= %s\n",strcat(name1,name2));
    printf("Name1 to name3= %d",strcmp(name3,name1));

return 0;
} 