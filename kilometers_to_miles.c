// To write program to understand different data types.
#include <stdio.h>

int main(void)
{
    printf("Welcome to Kilometer(s) to Mile(s) converter\n");
    int kilo;
    float con, mile;
    char s = 's';
    con = 0.62;

    printf("Kilometer(%c): ", s);
    scanf("%d", &kilo);

    mile = con * kilo;
    printf("Mile(%c): %.2f", s, mile);
}
