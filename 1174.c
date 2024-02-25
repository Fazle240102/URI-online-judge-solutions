#include <stdio.h>
int main()
{
    int i, j;
    double x[100];
    for (i = 0; i < 100; i++)
    {
        scanf("%lf", &x[i]);
    }

    for (j = 0; j < 100; j++)
    {
        if (x[j] <= 10)
        {

            printf("A[%d] = %.1lf\n", j, x[j]);
        }
    }
}