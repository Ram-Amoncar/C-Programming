#include <stdbool.h>
#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    int size, arr[MAX_SIZE], search_value, mid, low, high;
    bool flag = false;

    printf("Enter the size of the array [1-%i]\n", MAX_SIZE);
    do
    {
        scanf("%d", &size);
    } while (size > MAX_SIZE);

    printf("Enter the elements of the array in the ascending order\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element that you want to search in the array\n");
    scanf("%d", &search_value);
    low = 0;
    high = size - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == search_value)
        {
            printf("\nThe element is present in the array at index: %d\n", mid);
            flag = true;
            break;
        }
        else if (search_value < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    if (!flag)
    {
        printf("\nThe element is not present in the array\n");
    }
    return 0;
}
