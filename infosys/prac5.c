// Armstrong number
//input 153 out=armstrong
//123 not 


#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) 
    {
    printf("not armstrong");
    return 0;
    }

    int original = n;
    int count=0;
    int digit;
    int sum = 0;

    
    int temp = n;

    while (temp > 0) 
    {
    count++;
    temp = temp / 10;
    }
    
    
    while(n>0)
    {
       digit = n%10;
        int power = 1;
        for(int i = 1; i<=count; i++)
        {
            power = power * digit;
        }
      n = n/10;
      sum = sum + power;
    }
    
    if(original == sum)
    {
        printf("Armstrong");
    }else
    {
        printf("not armstrong");
    }
   return 0;
}