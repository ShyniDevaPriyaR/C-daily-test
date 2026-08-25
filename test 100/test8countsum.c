#include<stdio.h>
int main()
{
    int count = 0;
    int sum = 0;
    for(int i = 1; i<=10; i++)
    {
        if( i%2 == 0)
        {
            count = count+1;
            sum = sum+i;
        }
    }
    printf("%d", count);
    printf("\n%d", sum);
}