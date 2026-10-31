//Count the digits of a number

// #include<stdio.h>
// int main()
// {
//     long long n = -456;
//     // scanf("%lld", &n);
//     long long count=0;
//     if(n==0)
//     {
//         count = 1;
//     }
//     else
//     {
//         if(n<0)
//         {
//            n =-n;
//         }
//        while (n>0)
//       {
//         n=n/10;
//         count++;
//        }
//     }
    
//     printf("%lld", count);
    
    
//     return 0;
    
// }

//Sum of digits

#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long sum=0;
    long long digits;
    
        if(n<0)
        {
           n =-n;
        }
       while (n>0)
      {
        digits = n%10;
        sum = sum + digits;
        n=n/10;
        
       }
    
    
    printf("%lld", sum);
    
    
    return 0;
    
}