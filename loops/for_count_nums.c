// To write a program to understand 'For' loop.
#include <stdio.h>

int main()
{
    int n;

    printf("How many number you want to print ?\n");
    scanf("%d", &n);
    printf("Printing...\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}