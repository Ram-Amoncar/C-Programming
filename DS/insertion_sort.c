#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    int s, size, arr[MAX_SIZE];
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
    for (int i = 1; i < size; i++)
    {
        s = arr[i];
        for (int k = 0; k < i; k++)
        {
            if (s < arr[k])
            {
                for (int j = i; j >= k; j--)
                {
                    arr[j] = arr[j - 1];
                }
                arr[k] = s;
                break;
            }
        }
    }
    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", arr[i]);
    }
    return 0;
}
