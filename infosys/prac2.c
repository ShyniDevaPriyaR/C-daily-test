
// reverse-number

#include <stdio.h>
#include<limits.h>

int main() {
    int n=1534236469; //-123 //1200    //0  // 1234   inputs

    int rev = 0;
    int digit;
    
    // scanf("%d", &n);
    int sign = 1;
    if(n<0)
    {
        sign = -1;
        n = -n;
    }
    
    while(n>0)
    {
       digit = n%10;
        
       if (rev > (INT_MAX - digit) / 10) 
       {
        printf("0\n");
        return 0;
       }

       rev = rev * 10 + digit;
       n = n/10;
    }

   
    rev = rev*sign;
    

    printf("%d\n", rev);

    return 0;
}