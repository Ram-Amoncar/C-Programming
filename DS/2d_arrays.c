#include <stdio.h>
#include <stdlib.h>
#define MAX_ROW_LIMIT 10
#define MAX_COL_LIMIT 10

void main()
{
    int option, a[MAX_ROW_LIMIT][MAX_COL_LIMIT], b[MAX_ROW_LIMIT][MAX_COL_LIMIT], row, col;
    while (1)
    {
        printf("\n\tMENU\t\n");
        printf("1. Create\n");
        printf("2. Traverse\n");
        printf("3. Sum\n");
        printf("4. Difference\n");
        printf("5. Quit\n");
        printf("Enter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
            {
                printf("Enter the size of matrices\n");
                printf("rows: ");
                scanf("%d", &row);
                printf("cols: ");
                scanf("%d", &col);
                if (row < MAX_ROW_LIMIT && col < MAX_COL_LIMIT)
                {
                    printf("Enter the elements of the first matrix\n");
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            scanf("%d", &a[i][j]);
                        }
                    }
                    printf("Enter the elements of the second matrix\n");
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            scanf("%d", &b[i][j]);
                        }
                    }
                    printf("Matrices were created successfully.\n");
                }
                else
                {
                    printf("The row & col size should be less than or equal to %i & %i respectively.\n", MAX_ROW_LIMIT, MAX_COL_LIMIT);
                }
                break;
            }
            case 2:
            {
                printf("1. First matrix\n2. Second matrix\nEnter your choice\n");
                scanf("%d", &option);
                if (option == 1)
                {
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            printf(" %d ", a[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            printf(" %d ", b[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;
            }
            case 3:
            {
                int sum[MAX_ROW_LIMIT][MAX_COL_LIMIT];
                printf("The sum of two matrices is:\n");
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        sum[i][j] = a[i][j] + b[i][j];
                        printf(" %d ", sum[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 4:
            {
                int dif[MAX_ROW_LIMIT][MAX_COL_LIMIT];
                printf("The difference between two matrices is:\n");
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        dif[i][j] = a[i][j] - b[i][j];
                        printf(" %d ", dif[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid option");
            }
        }
    }
}
