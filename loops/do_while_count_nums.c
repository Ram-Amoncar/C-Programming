// To write a program to understand 'Do-While' loop.
#include <stdio.h>

int main()
{
    int i = 0, num;
    printf("How many number you want to print ?\n");
    scanf("%d", &num);
    printf("Printing...\n");
    do
    {
        i++;
        printf("%d\n", i);
    } while (i < num);

    return 0;
}