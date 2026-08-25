#include<stdio.h>
int main()
{
    int count=0;
    for (int i=1; i<=10; i++)
    {
        if(i%2 == 0)
        {
            count = count+1;
        }
    }
    printf("%d", count); 
}