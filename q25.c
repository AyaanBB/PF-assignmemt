#include <stdio.h>

int main() {
    // Write C code here
     int a = 0, b = 1,n;
     
     printf("Enter n = ");
     scanf("%d",&n);
    printf("0 1");
    
    while (b < n) {
        int temp = a + b;
        a = b;
        b = temp;
        if (b < n) printf(" %d", b);
    }
}