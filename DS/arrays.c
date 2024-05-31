#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 20

void main()
{
    int option, size, arr[MAX_LENGTH];
    while (1)
    {
        printf("\n\tMENU\t\n");
        printf("1. Create an array\n");
        printf("2. Traverse the array\n");
        printf("3. Insert an element\n");
        printf("4. Delete an element\n");
        printf("5. Update an element\n");
        printf("6. Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
            {
                do
                {
                    printf("Enter the size of the array\n");
                    scanf("%d", &size);
                    if (size > MAX_LENGTH)
                    {
                        printf("The size should be less than or equal to %i\n", MAX_LENGTH);
                    }
                } while (size > MAX_LENGTH);

                printf("Enter the elements of the array\n");
                for (int i = 0; i < size; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("The array was created successfully");
                break;
            }
            case 2:
            {
                printf("The elements of the array are:\n");
                for (int i = 0; i < size; i++)
                {
                    printf(" %d ", arr[i]);
                }
                break;
            }
            case 3:
            {
                int index, ele;
                printf("Enter the value of index where you want to insert the element\n");
                scanf("%d", &index);
                printf("Enter the new element\n");
                scanf("%d", &ele);
                if (size < MAX_LENGTH)
                {
                    if (index < size && index > -1)
                    {
                        int s = size;
                        if (index == size)
                            arr[index] = ele;
                        else
                            while (index <= s)
                            {
                                arr[s + 1] = arr[s];
                                s--;
                            }
                        arr[index] = ele;
                        size++;
                        printf("The element was successfully inserted in the array");
                    }
                    else
                    {
                        arr[size] = ele;
                        size++;
                    }
                }
                else
                {
                    printf("MAX LENGTH reached! Please delete an element before inserting again.");
                }
                break;
            }
            case 4:
            {
                int i;
                printf("Enter the index of the element that you want to delete\n");
                scanf("%d", &i);
                if (i < size)
                {
                    while (i <= size)
                    {
                        arr[i] = arr[i + 1];
                        i++;
                    }
                    size--;
                    printf("The element was successfully deleted from the array");
                }
                else
                {
                    printf("Invalid index");
                }
                break;
            }
            case 5:
            {
                printf("Update by\n\t1. Element\n\t2. Index\n");
                scanf("%d", &option);
                switch (option)
                {
                    case 1:
                    {
                        int new_value, old_value;
                        printf("Old value: ");
                        scanf("%d", &old_value);
                        printf("New value: ");
                        scanf("%d", &new_value);
                        for (int i = 0; i < size; i++)
                        {
                            if (arr[i] == old_value)
                            {
                                arr[i] = new_value;
                                break;
                            }
                            if (i == size - 1)
                            {
                                printf("Old value doesn't exists in the array");
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        int index, new_value;
                        printf("Enter the index value of element that you want to update\n");
                        scanf("%d", &index);
                        if (index < size && index > -1)
                        {
                            printf("New value: ");
                            scanf("%d", &new_value);
                            arr[index] = new_value;
                            printf("The array was successfully updated");
                        }
                        else
                        {
                            printf("Invalid index");
                        }
                        break;
                    }
                    default:
                    {
                        printf("Invalid option");
                    }
                }
                break;
            }
            case 6:
            {
                exit(0);
            }
            default:
            {
                printf("Wrong input");
            }
        }
    }
}
