//This program is designed for factorial number

#include<stdio.h>
int factorial(int num)
{
    int fact = 1;

    for(int i = 1 ; i <= num ; i++)
    {
        fact = fact * i;
    }
    return fact;
}



int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num < 0)
    {
        printf("Factorial is not negative number\n");
    }
    else{
        printf("Factorial value will be %d is %d: ",num,factorial(num));
    }
    return 0;
}