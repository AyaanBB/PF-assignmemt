#include <stdio.h>

int main() {
    // Write C code here
    int a,b,i,sum;
    i=1,sum=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}