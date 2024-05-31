// To write program to understand If and If-Else.
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);
    printf("The number that you have entered is an ");

    if (num % 2 == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}