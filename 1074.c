#include <stdio.h>

int main()
{
    int i, N, X;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &X);

        if (X > 0 && X % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        if (X > 0 && X % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        if (X < 0 && X % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if (X < 0 && X % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
        if (X == 0)
        {
            printf("NULL\n");
        }
    }

    return 0;
}