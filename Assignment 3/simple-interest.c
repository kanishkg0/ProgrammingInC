#include <stdio.h>

int main() {
    int p, n, count = 1;
    float r, si;
    
    while (count <= 3)
    {
        printf("Enter value of p,n,r: ");
        scanf("%d %d %f",&p,&n,&r);

        si = p * n * r / 100;
        printf("Simple interest = %f\n",si);

        count = count + 1;
    }

return 0;    
}