#include <stdio.h>

int fact(int num);

int main()
{
    int n;
    printf("Enter the Number to get its factorial\n");
    scanf("%d", &n);

    printf("\nThe factorial of %d is %d", n, fact(n));
}

int fact(int num)
{
    int f;
    if (num <= 0 || num == 1)
    {
        return 1;
    }
    else if (num > 2)
    {
        return num * fact(num - 1);
    }
}
