// To write a program to understand Switch Case
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
void rectangle_area();
void circle_area();
void square_area();
void triangle_area();

void main()
{
    int ch;
    while (1)
    {
        printf("    Menu\n");
        printf("---x---x---\n");
        printf("1. Area of Rectangle\n");
        printf("2. Area of Circle\n");
        printf("3. Area of Square\n");
        printf("4. Area of Triangle\n");
        printf("5. Quit\n");
        printf("---x---x---\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
            {
                rectangle_area();
                break;
            }
            case 2:
            {
                circle_area();
                break;
            }
            case 3:
            {
                square_area();
                break;
            }
            case 4:
            {
                triangle_area();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid Option");
            }
        }
    }
}

void rectangle_area()
{
    float a, b, area;
    printf("Enter length and breadth of rectangle\n");
    scanf("%f%f", &a, &b);
    area = a * b;
    printf("area of rectangle is %0.0f\n", area);
}

void square_area()
{
    float a, area;
    printf("Enter the length of one side\n");
    scanf("%f", &a);
    area = a * a;
    printf("area of square is %0.0f\n", area);
}

void circle_area()
{
    float a, area;
    printf("Enter radius of circle\n");
    scanf("%f", &a);
    area = PI * a * a;
    printf("area of circle is %0.2f\n", area);
}

void triangle_area()
{
    float a, b, area;
    printf("Enter base and height of triangle\n");
    scanf("%f%f", &a, &b);
    area = (a * b) / 2;
    printf("area of rectangle is %0.2f\n", area);
}
