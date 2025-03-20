// This program is designed to find the given number prime or not

#include<stdio.h>
int prime(int n)
{
    if(n <= 1)
    {
        return 0; 
    }
    for(int i = 2; i * i <= n; i++) // loop with sqrt(num)
    {
        if(n % i == 0)
        return 0; // if it's not a prime
    }

    return  1; // prime number
}



int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(prime(number))
    {
        printf("%d is a prime number.", number);
    }
    else
    printf("%d is not a prime number", number);
    return 0;
}