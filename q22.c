#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    i=2;
    for(i<a;i++;)
    {
        if(a%i == 0)
        {
            printf("Not a prime number");
            break;
        }
        else
        {
            printf("Prime number");
            break;
        }
        
    }

    return 0;
}