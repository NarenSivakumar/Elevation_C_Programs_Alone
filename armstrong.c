#include<stdio.h>
#include<math.h>

int armstrong(int num)
{
    int digits = 0, sum = 0, temp, rem;

   int  originalnum = num;
   
   // Count the number of digits
   temp = num;
   while(temp != 0)
   {
    digits++;
    temp = temp / 10;
   }

   // Calculate the sum of the cube of each digit
   temp = num;
   while(temp != 0)
   {
     rem = temp % 10;
    sum += pow(rem, digits);
    temp /= 10;
   }

   return (sum == originalnum);
}

int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    if(armstrong(number))
    {   
        printf("%d is a armstrong number\n",number);
    }
    else
    {
        printf("%d is not a armstrong number",number);
        return 0;
}
}