// Sum of elements in the array.
#include <stdio.h>

int main()
{
    int arr[5], sum = 0;
    printf("Enter five elements of array.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nThe sum of elements in the array is %d", sum);

    return 0;
}