#include <stdio.h>

int main()
{
    int X, Y, big, small, i, sum = 0;

    scanf("%d %d", &X, &Y);

    big = X;
    small = Y;

    if (big < Y)
    {
        big = Y;
        small = X;
    }

    for (i = small + 1; i < big; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}