#include<stdio.h>
int main()
{
    int n = 155525;
    int digit;
    int count = 0;
    while( n > 0)
    {
        digit = n%10;
        if( digit == 5)
        {
            count++;
        }
        n = n/10;
    }
    printf("%d", count);
  return 0;  
}