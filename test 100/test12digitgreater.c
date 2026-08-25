#include<stdio.h>
int main()
{
    int n = 123456789;
    int digit;
    int sum = 0;
    while (n > 0)
    {
        digit = n%10;
        if(digit > 5)
        {
            sum = sum + digit;
        }
        n = n/10;
    }
    printf("%d", sum);
 return 0;   
    
}