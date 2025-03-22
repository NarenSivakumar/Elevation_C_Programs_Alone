#include<stdio.h>

int main()
{
    char str[25];
    int palindrome = 1;

    printf("Enter the string: ");
    scanf("%s", str);

    int len = 0;
    // Find the length of the string
    while(str[len] != '\0')
    {
        len++;
    }
    printf("Length of the string: %d\n", len);

    for(int i = 0; i < len / 2; i++)
    {
        while(str[i] != str[len - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    if(palindrome)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }

}