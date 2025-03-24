//This program is a simple implementation of the Vowel-Consonant counter

#include <stdio.h>
#include <ctype.h>

int main()
{
    int vow = 0, cons = 0;
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vow++;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            cons++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vow, cons);
    return 0;
}