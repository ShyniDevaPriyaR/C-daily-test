// Palindrome Number
//121

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

#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int original = n;

    if(n<0)
    {
       printf("not palin");
       return 0;
    }
    
    int rev = 0;
    int digit;
    
    
    
    
    while(n>0)
    {
       digit = n%10;
        
       if (rev > (INT_MAX - digit) / 10) 
       {
        printf("not palin");
        return 0;
       }

       rev = rev * 10 + digit;
       n = n/10;
    }

   

    if(original == rev)
    {
        printf("palin");
    }
    else
    {
        printf("not palin");
    }
    

    return 0;
}