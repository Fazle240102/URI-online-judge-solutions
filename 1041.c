#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Q1\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4\n", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("Origem\n", x, y);
    }
    else if (x == 0)
    {
        printf("Eixo Y\n", x, y);
    }
    else if (y == 0)
    {
        printf("Eixo X\n", x, y);
    }

    return 0;
}