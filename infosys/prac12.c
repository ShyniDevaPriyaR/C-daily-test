//Count even and odd digits


#include<stdio.h>
int main()
{
    long long n ;
    scanf("%lld", &n);
    long long even = 0;
    long long odd = 0;
    long long count=0;
    long long digits;
    
    if(n<0)
    {
        n=-n;
    }
    if(n==0)
    {
        even = 1;
    }
    
       while (n>0)
      {
        digits = n%10;
        if(digits % 2 == 0)
        {
            even++;
            
        }
        else 
        {
            odd++;
        
        }
        n=n/10;
       }
       printf("Even:%lld Odd:%lld", even, odd );
    
    
    return 0;
    
}