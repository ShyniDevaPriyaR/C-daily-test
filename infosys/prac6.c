// Perfect Number


// #include <stdio.h>

// int main() 
// {
//     int n = 12 ; 
//     int sum = 0;

//     // scanf("%d", &n);

//     if(n <= 1)
//     {
//         printf("not perfect");
//         return 0;
//     }
    
//     for(int i = 1; i <= n-1; i++)
//     {
//         if(n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
    
//     if( sum == n)
//     {
//         printf("perfect");
//     }
//     else
//     {
//         printf("not perfect");
//     }

//     return 0;
// }



//Count the factors

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;

    for(int i = 1; i<= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}