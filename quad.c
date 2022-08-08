#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d;
    float r1, r2;
    printf("enter first no");
    scanf("%d", &a);
    printf("enter second no");
    scanf("%d", &b);
    printf("enter third no");
    scanf("%d", &c);
    d = b * b - (4 * a * c);
    if (d == 0)
    {
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("The Quadratic Equation has equal and real roots %.2f", r1);
        printf("The Quadratic Equation has equal and real roots %.2f", r2);
    }
    else if (d > 0)
    {
        r1 = -b + sqrt(d) / (2 * a);
        r2 = -b - sqrt(d) / (2 * a);
        printf("The Roots are %.2f", r1);
        printf("The Roots are %.2f", r1);
    }
    else
    {
        printf("The roots are imaginary");
    }
}