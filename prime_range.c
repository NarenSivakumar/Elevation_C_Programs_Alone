// This program is designed to checking prime number between the range

#include<stdio.h>
int prime(int n)
{
    int i;
    if(n <= 1)
        return 0;
    
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        return 0;
    }
    return 1;
}


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    for(int i = 1; i <= number; i++)
    {
        if(prime(i))
        {
            printf("%d",i);
        }
            }
    
}