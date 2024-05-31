// To write program to understand input/output statements.
#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the values of A & B");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    c = a + b;
    printf("A + B = %d", c);

    return 0;
}
