//This program is a simple implementation of finding the maximum and minimum element in an array


#include <stdio.h>

int main()
{
    int arr[100], n, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0]; // Initialize the min and max with the first element

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }    
        if(arr[i] < min)
        {
            min = arr[i];
        }    
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
    return 0;
    
}