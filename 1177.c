#include <stdio.h>

int main()
{
    int T, i, j;

    scanf("%d", &T);

    for (i = 0; i < 1000;)
    {
        for (j = 0; j < T && i < 1000; j++)
        {
            printf("N[%d] = %d\n", i, j);
            i++;
        }
    }

    return 0;
}
