#include <stdbool.h>
#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    int arr[MAX_SIZE], size, search_value;
    bool flag = false;
    printf("Enter the size of the array [1-%i]\n", MAX_SIZE);
    do
    {
        scanf("%d", &size);
    } while (size > MAX_SIZE);

    printf("Enter the elements of the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element that you want search in array\n");
    scanf("%d", &search_value);
    for (int i = 0; i < size; i++)
    {
        if (search_value == arr[i])
        {
            printf("\nThe element is present in the array at index: %d", i);
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        printf("\nThe element is not present in the array");
    }
    return 0;
}
