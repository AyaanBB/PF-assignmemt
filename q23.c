#include <stdio.h>

int main() {
    // Write C code here
    int n,i;
    
    i=1;
    do
    {
        scanf("%d",&n);
        if(n == 5678)
        {
            printf("Access granted");
            break;
        }
        else
        {
            if(i == 3)
            {
                printf("Card blocked");
                break;
            }
            printf("Try again\n");
            i=i+1;
        }
    
        
    }
    while(i<=3);

    return 0;
}