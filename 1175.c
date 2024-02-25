#include <stdio.h>

int main()
{
    int i, j, k, temp, N[20];

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    for (j = 19, i = 0; i < j; i++, j--)
    {
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
    }

    for (j = 0; j < 20; j++)
    {
        printf("N[%d] = %d\n", j, N[j]);
    }

    return 0;
}
