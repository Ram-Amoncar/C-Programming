// To write program to understand Nested If-Else.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value for\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("Value of A is highest");
        }
        else
        {
            printf("Value of C is highest");
        }
    }
    else
    {
        if (b > c)
        {
            printf("Value of B is highest");
        }
        else
        {
            printf("Value of C is highest");
        }
    }
    return 0;
}
