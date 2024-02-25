#include <stdio.h>

int main()
{
    int i, j;
    double x;

    scanf("%lf", &x);

    for (i = 0; i < 100; i++)
    {

        printf("N[%d] = %.4lf\n", i, x);
        x = x / 2.0;
    }

    return 0;
}
