// To write program to understand the basic programming constructs: variables & constants.
#include <stdio.h>
#define PI 3.14

// Two ways to define constants:-
// 1> #define PI 3.14
// 2> const float PI = 3.14f;

int main(void)
{
    int rad;
    float area;
    printf("Radius of circle (cm): ");
    scanf("%d", &rad);

    area = PI * rad * rad;
    printf("The area of the circle: %.2f centimeter square", area);
}
