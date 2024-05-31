#include <stdio.h>

int main()
{
    int length, breadth, per, are;
    printf("Enter Length and Breadth of Rectangle\n");
    scanf("%d%d", &length, &breadth);

    per = perimeter(length, breadth);
    are = area(length, breadth);

    printf("\nArea: %d", are);
    printf("\nPerimeter: %d", per);
}

int perimeter(int x, int y)
{
    int p;
    p = 2 * (x + y);
    return p;
}

int area(int g, int f)
{
    int a;
    a = g * f;
    return a;
}