#include<stdio.h>

int reversed(int num)
{
    int reversed = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    return reversed;
}



int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Original number: %d\n", number);
    printf("Reversed number is: %d\n", reversed(number));
        return 0;
}