#include <stdio.h>
int main()
{
    int i, j, k, x[10];
    scanf("%d", &x[0]);
    for (i = 1, k = 0; i < 10; i++, k++)
    {
        x[i] = 2 * x[k];
    }

    for (j = 0; j < 10; j++)
    {

        printf("N[%d] = %d\n", j, x[j]);
    }
}