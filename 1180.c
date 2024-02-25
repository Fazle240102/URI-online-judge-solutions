#include <stdio.h>
int main()
{
    int i, j, n, small;
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    small = x[0];
    for (j = 1; j < n; j++)
    {
        if (x[j] < small)
        {
            small = x[j];
        }
    }

    printf("Menor valor: %d\n", small);
    for (int k = 0; k < n; k++)
    {
        if (x[k] == small)
        {
            printf("Posicao: %d\n", k);
            break;
        }
    }
}