// To write a program to understand 'While' loop.
#include <stdio.h>

int main()
{
    int num, i = 0;
    printf("How many number you want to print ?\n");
    scanf("%d", &num);
    printf("Printing...\n");
    while (i < num)
    {
        i++;
        printf("%d\n", i);
    }
    return 0;
}
