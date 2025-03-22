#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Swapping the numbers
    a = a + b;
    b = a - b;
    a = a - b;

    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);   
    return 0;
}