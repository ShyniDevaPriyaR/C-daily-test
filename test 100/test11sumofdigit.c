#include<stdio.h>
int main()
{
    int n = 1234;
    int sum = 0;
    int digit;
    while( n>0 )
    {
        digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    printf("%d", sum);
   return 0; 
}