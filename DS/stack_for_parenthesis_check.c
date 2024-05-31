#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 20
int top = -1;
char stack[MAX_SIZE];

void push(char c);
char pop();
void show();
void peek();
bool is_full();
bool is_empty();

int main()
{
    int len;
    char str[MAX_SIZE], ele;
    bool is_balanced = true;
    printf("Enter the Expression\n");
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        switch (str[i])
        {
            case '{':
            case '[':
            case '(':
            {
                push(str[i]);
                break;
            }
            case '}':
            {
                if (is_empty())
                {
                    is_balanced = false;
                    break;
                }
                char brace = pop();
                if (brace != '{')
                {
                    is_balanced = false;
                }
                break;
            }
            case ']':
            {
                if (is_empty())
                {
                    is_balanced = false;
                    break;
                }
                char brace = pop();
                if (brace != '[')
                {
                    is_balanced = false;
                }
                break;
            }
            case ')':
            {
                if (is_empty())
                {
                    is_balanced = false;
                    break;
                }
                char brace = pop();
                if (brace != '(')
                {
                    is_balanced = false;
                }
                break;
            }
        }
        if (!is_balanced)
        {
            break;
        }
    }
    
    if (is_empty() && is_balanced)
    {
        printf("The Expression is balanced");
    }
    else
    {
        printf("The Expression is not balanced");
    }

    return 0;
}

void push(char c)
{
    if (is_full())
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
    }
    stack[top] = c;
}

char pop()
{
    if (is_empty())
    {
        printf("The stack is empty\n");
        return '\0';
    }
    char brace = stack[top];
    top--;
    return brace;
}

bool is_empty()
{
    return top < 0;
}

bool is_full()
{
    return top == MAX_SIZE - 1;
}