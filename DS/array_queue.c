#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int front = -1, rear = -1, queue[MAX_SIZE];

void enqueue();
void dequeue();
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
        printf("\n\tMENU\n");
        printf("1. Enqueue an element\n2. Dequeue an element\n3. Show\n4. Peek\n5. Size\n6. Exit");
        printf("\nEnter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
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

void enqueue()
{
    if (is_full())
    {
        printf("Queue is Full\n");
    }
    else
    {
        int ele;
        printf("Enqueue: ");
        scanf("%d", &ele);
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = ele;
        }
        else
        {
            rear++;
            queue[rear] = ele;
        }
    }
}

void dequeue()
{
    if (is_empty())
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Dequeued: %i\n", queue[front]);
        if (rear == 0) // Front will be always 0
        {
            front = rear = -1;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
    }
}

int is_full()
{
    if (rear == MAX_SIZE - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int is_empty()
{
    if (front == -1 && rear == -1)
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
        printf("Nothing to show here.\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            if (i == front && i == rear)
            {
                printf("Front --> %d <-- Rear\n", queue[i]);
            }
            else if (i == front)
            {
                printf("Front --> %d  ", queue[i]);
            }
            else if (i == rear)
            {
                printf("  %d <-- Rear\n", queue[i]);
            }
            else
            {
                printf("  %d  ", queue[i]);
            }
        }
    }
}

void peek()
{
    if (is_empty())
    {
        printf("Nothing here.\n");
    }
    else
    {
        printf("\n%d\n", queue[front]);
    }
}

void size(){
    printf("Size: %i\n", rear + 1);
}
