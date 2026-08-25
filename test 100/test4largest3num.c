#include<stdio.h>
int main()
{
    int a=10, b=25, c=15;

    if(a>b && a>c)
    {
        printf("a is greater");
    } else if(b>a && b>c)
    {
        printf("b is greater");
    } 
    else 
    {
        printf("C is greater");
    }
    return 0;

    
}