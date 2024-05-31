// Taking user input for array elements and printing elements of array.
#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter five elements of array.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered elements of the array are:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}