// Factorial of a number

// #include<stdio.h>
// int main()
// {
//     long long n;
//     scanf("%lld", &n);
//     long long prod=1;
//     for(long long i=1; i<=n; i++)
//     {
//        prod = prod*i;
//     }

//     printf("%lld", prod);
//     return 0;
    
// }

//Strong Number

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int original = n;
    
    int sum = 0;
    int digits;

    if(n<0)
    {
        printf("not strong");
        return 0;
    }

    if( n==0)
    {
        printf("not strong number");
        return 0;
    }

    while(n>0)
    {
        digits = n%10;
        int prod=1;
         for(int i =1; i<=digits; i++)
         {
            prod = prod*i;
         }
        sum = sum + prod;
        n =n/10;
    }

    if(original == sum)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }
    
    return 0;
    
}
