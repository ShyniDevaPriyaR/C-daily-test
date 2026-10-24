//Check whether a number is prime

#include<stdio.h>
 int main()
{
    int n =9;
    // scanf("%d", &n);

    int count = 0;

    for(int i = 1; i<= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    
    if(count == 2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}