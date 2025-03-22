#include<stdio.h>

int main()
{
    char str[15], temp;
    int len = 0;

    printf("Enter the string: ");
    scanf("%s",str);

    // Find the length of the string 
    while(str[len] != '\0')
    {
        len++;
    }
    printf("Length of the string: %d\n", len);

    for(int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    
    }

    printf("Reversed string: %s\n",str);
    return 0;
}