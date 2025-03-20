// This program is designed to check the given number is palindrome or not like 11, 121

#include<stdio.h>

int palindrome(int num)
{
    int temp, rev = 0, rem;
    temp = num;
    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return (rev == temp);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(palindrome(num))
    {
        printf("It's a palindrome\n");
    }
    else
    {
        printf("It's not a palindrome number\n");
    }
    return 0;
}