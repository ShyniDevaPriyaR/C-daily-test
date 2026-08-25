#include<stdio.h>
int main()
{
    int n = 1234;
    int rev = 0;
    int digit;
   
    while(n > 0)
    {
        digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    printf("%d", rev);
   return 0; 
}