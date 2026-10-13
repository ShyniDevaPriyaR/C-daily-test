// Count Digits Greater Than 4 AND Odd
#include<stdio.h>
int main()
{
    int n = 123456789;
    int digit;
    int count = 0;

    while(n > 0)
    {
        digit = n%10;
        if(digit > 4 && digit % 2 != 0)
        {
            count++;
        }
        n = n/10;
    }
    printf("%d", count);
  return 0;  

}