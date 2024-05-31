#include <stdio.h>

void add();

int main()
{
    printf("Main function starts here\n");
    add();
    printf("\nMain function ends here");
}

void add()
{
    int a, b, sum;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum: %d", sum);
}
