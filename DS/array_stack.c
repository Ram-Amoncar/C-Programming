#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4
int top = -1, stack[MAX_SIZE];

void push();
void pop();
void show();
void peek();
void size();
int is_full();
int is_empty();

int main()
{
    int option;
    while (1)
    {
        printf("\n------\nMENU");
        printf("\n1. Push\n2. Pop\n3. Show\n4. Peek\n5. Size\n6. Exit");
        printf("\nEnter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                peek();
                break;
            }
            case 5:
            {
                size();
                break;
            }
            case 6:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid Option\n");
            }
        }
    }
    return 0;
}

void push()
{
    int ele;
    if (is_full())
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Push: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
}

int is_full()
{
    if (top == (MAX_SIZE - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pop()
{
    if (is_empty())
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped: %i\n", stack[top]);
        top--;
    }
}

int is_empty()
{
    if (top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void show()
{
    if (is_empty())
    {
        printf("\nNothing here to show.");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            if (top == i)
            {
                printf("\n%d <-- Top", stack[i]);
            }
            else
            {
                printf("\n%d", stack[i]);
            }
        }
    }
}

void peek()
{
    if (is_empty())
    {
        printf("\nNothing here.");
    }
    else
    {
        printf("\n%d", stack[top]);
    }
}

void size()
{
    printf("Size: %i", top + 1);
}