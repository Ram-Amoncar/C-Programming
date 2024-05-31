#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    int i, j, temp, size, arr[MAX_SIZE], min = 0;
    printf("Enter the size of the array [1-%i]\n", MAX_SIZE);
    do
    {
        scanf("%d", &size);
    } while (size > MAX_SIZE);
    printf("Enter the elements of the array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = min; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
        min++;
    }
    printf("\nThe sorted array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("  %d  ", arr[i]);
    }
    return 0;
}
