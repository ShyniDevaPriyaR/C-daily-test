// find the gcd

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a , &b);
//     int gcd = 1;
//     int i = 1;
//     while( i<=a && i<=b)
//     {
//         if(a%i == 0   &&   b%i == 0)
//         {
//             gcd = i;
//         }
//         i++;
//     }

//     if(a == 0)
//     {
//         gcd = b;
//     }
//     else if( b == 0)
//     {
//         gcd = a;
//     }

//     printf("%d", gcd);
    
//     return 0;

// }



//find lcm

#include<stdio.h>
int main()
{
    int a =999983, b =999979;
    // scanf("%d %d", &a , &b);
    int gcd = 1;
    
    int i = 1;
    while( i<=a && i<=b)
    {
        if(a%i == 0   &&   b%i == 0)
        {
            gcd = i;
        }
        i++;
    }

    long long lcm =(long long)(a / gcd) * b;

    

    printf("%lld", lcm);
    
    return 0;

}