#include <stdio.h>

int main()
{
    int i, x, highest, idx;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &x);

        if (highest < x)
        {
            highest = x;
            idx = i;
        }
    }

    printf("%d\n%d\n", highest, idx);

    return 0;
}