#include <stdio.h>

int swap(int *p1, int *p2);

int main()
{
    int num1, num2;
    printf("Enter 2 Numbers\n");
    scanf("%d%d", &num1, &num2);

    printf("Before swap function\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    swap(&num1, &num2);

    printf("After swap function\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
}

int swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}