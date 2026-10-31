// Palindrome Number
// 121

// #include<stdio.h>
// int main()
// {
    
//     int n;
//      scanf("%d", &n);
//     int original = n;
//     int rev = 0;
//     int digit;

   
   
//     while(n > 0)
//     {
//         digit = n%10;
//         rev = rev * 10 + digit;
//         n = n/10;
//     }

//     if(original == rev)
//     {
//         printf("palindrome");
//     }else
//     {
//         printf("not palindrome");
//     }
    
//    return 0; 
// }






// reverse-
//-121

// 










// Palindrome Number
// 121

#include<stdio.h>
int main()
{
    
    long long n = 121;
    //  scanf("%lld", &n);
    long long original = n;
    long long rev = 0;
    long long digit;

   
   
    while(n > 0)
    {
        digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;
    }

    if(original == rev)
    {
        printf("palindrome");
    }else
    {
        printf("not palindrome");
    }
    
   return 0; 
}
