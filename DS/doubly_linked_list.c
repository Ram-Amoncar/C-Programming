#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    struct Node *next;
    int data;
};

struct Node *head = NULL, *tail = NULL;
int size;

void create();
void search();
void update();
void insert();
void delete();
void traverse();
void print_size();
void clean_up();
void reverse_traverse();

int main()
{
    unsigned short option;
    while (true)
    {
        printf("\n--------\n\tMENU\n");
        printf("1. Create\n2. Insert\n3. Delete\n4. Update\n5. Traverse\n6. Reverse Traverse\n7. Size\n8. Exit");
        printf("\nEnter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                insert();
                break;
            }
            case 3:
            {
                delete ();
                break;
            }
            case 4:
            {
                update();
                break;
            }
            case 5:
            {
                traverse();
                break;
            }
            case 6:
            {
                reverse_traverse();
                break;
            }
            case 7:
            {
                print_size();
                break;
            }
            case 8:
            {
                exit(0);
            }
        }
    }
    clean_up();
    return 0;
}

void insert()
{
    int value, index;
    printf("Index(starts from zero): ");
    scanf("%d", &index);
    printf("Value: ");
    scanf("%d", &value);
    if (index > -1 && index <= size)
    {
        struct Node *new_node = malloc(sizeof(struct Node));
        if (new_node != NULL)
        {
            new_node->data = value;
            new_node->next = NULL;
            new_node->prev = NULL;
            // Inserting when list is emtpy
            if (size == 0)
            {
                head = new_node;
                tail = new_node;
            }
            // Insert at start
            else if (index == 0)
            {
                new_node->next = head;
                head->prev = new_node;
                head = new_node;
            }
            // Insert at end
            else if (index == size)
            {
                tail->next = new_node;
                new_node->prev = tail;
                tail = new_node;
            }
            // Insert in middle
            else
            {
                struct Node *ptr = head;
                for (int i = 0; ptr != NULL && i < index; i++)
                {
                    if (i == index - 1)
                    {
                        struct Node *tmp = ptr->next;
                        ptr->next = new_node;
                        new_node->prev = ptr;
                        tmp->prev = new_node;
                        new_node->next = tmp;
                        break;
                    }
                    ptr = ptr->next;
                }
            }
            size++;
        }
        else
        {
            printf("Not Enough Memory");
        }
    }
    else
    {
        printf("Invalid Index");
    }
}

void delete()
{
    int value, index;
    printf("Index(starts from zero): ");
    scanf("%d", &index);
    if (index > -1 && index < size)
    {
        // Pointer to free deleted node
        struct Node *deleted_node = NULL;
        // Only one node
        if (size == 1)
        {
            deleted_node = head;
            head = tail = NULL;
        }
        // Delete Head
        else if (index == 0)
        {
            deleted_node = head;
            head = head->next;
            head->prev = NULL;
        }
        // Delete tail
        else if (index == size - 1)
        {
            deleted_node = tail;
            tail = tail->prev;
            tail->next = NULL;
        }
        // Delete from middle
        else
        {
            struct Node *ptr = head;
            for (int i = 0; ptr != NULL && i < index; i++)
            {
                if (i == index - 1)
                {
                    struct Node *tmp = ptr->next->next;
                    deleted_node = ptr->next;
                    tmp->prev = ptr;
                    ptr->next = tmp;
                    break;
                }
                ptr = ptr->next;
            }
        }
        size--;
        free(deleted_node);
    }
    else
    {
        printf("Invalid Index");
    }
}

void update()
{
    int value, index;
    printf("Index(starts from zero): ");
    scanf("%d", &index);
    printf("New Value: ");
    scanf("%d", &value);
    if (index > -1 && index < size)
    {
        struct Node *ptr = NULL;
        int half = size / 2;
        // Figures out best way to traverse list to update.
        if (index <= half)
        {
            ptr = head;
            for (int i = 0; ptr != NULL; i++)
            {
                if (i == index)
                {
                    ptr->data = value;
                    break;
                }
                ptr = ptr->next;
            }
        }
        else
        {
            ptr = tail;
            for (int i = size; ptr != NULL; i--)
            {
                if (i == index)
                {
                    ptr->data = value;
                    break;
                }
                ptr = ptr->prev;
            }
        }
    }
    else
    {
        printf("Invalid Index");
    }
}

void traverse()
{
    struct Node *ptr = head;
    if (ptr == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        printf("\nThe list elements are:\n");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            if (ptr->next == NULL)
            {
                printf(" ==>> NULL");
            }
            else
            {
                printf(" <==>> ");
            }
            ptr = ptr->next;
        }
    }
}

void reverse_traverse()
{
    struct Node *ptr = tail;
    if (ptr == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        printf("\nThe list elements are:\n");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            if (ptr->prev == NULL)
            {
                printf(" ==> NULL");
            }
            else
            {
                printf(" <<==> ");
            }
            ptr = ptr->prev;
        }
    }
}

void create()
{
    int n, value;
    printf("How many nodes do you want to create\n");
    scanf("%d", &n);
    printf("Enter %d values\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        struct Node *temp = malloc(sizeof(struct Node));
        if (temp == NULL)
        {
            printf("Not Enough Memory");
            break;
        }
        temp->prev = NULL;
        temp->next = NULL;
        temp->data = value;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    size = n;
}

void print_size()
{
    printf("Size: %i\n", size);
}

void clean_up()
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        struct Node *next_ref = ptr->next;
        free(ptr);
        ptr = next_ref;
    }
}
