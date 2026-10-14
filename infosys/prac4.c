 //sum of digits

#include <stdio.h>

int main() {
    int n, sum = 0;
    int digit;

    scanf("%d", &n);


    if(n<0)
    {
        n=-n;
    }
    
    while(n>0)
    {
       digit = n%10;
       sum = sum + digit;
       n = n/10;
    }

    printf("%d\n", sum);

    return 0;
}