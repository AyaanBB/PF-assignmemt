#include <stdio.h>

int main() {
    // Write C code here
    int n,b,sum,on;
    sum=0;
    scanf("%d",&n);
    // on = original number which is used for comparison
    
    on=n;
    
    while(n != 0)
    {
        b=n%10;
        //b is used for getting last digit
        sum = sum +(b*b*b);
        n=n/10;
    }
    if(sum == on)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not a armstrong number");
    }

    return 0;
}