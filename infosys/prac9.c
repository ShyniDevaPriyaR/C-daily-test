// Sum of the first N natural numbers

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum =0;

//     for(int i=1; i<=n; i++)
//     {
//         sum = sum+i;
//     }

//     printf("%d", sum);
    
// }

// Calculate the sum using a formula
//overflow
#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    // long long sum =0;

    long long sum = n*(n+1)/2;
    

    printf("%lld", sum);
    
}