// Two-dimensional array
// Taking user input for matrix array and printing elements of matrix array.
#include <stdio.h>

int main()
{
    const int rows = 2, cols = 3;
    int arr[rows][cols];

    printf("Enter elements of matrix array.\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("row[%d]-col[%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The entered elements for matrix array are: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
