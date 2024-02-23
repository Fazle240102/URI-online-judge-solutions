#include <stdio.h>
int main()
{
    int i, x, z, sum = 0, c = 0;
    scanf("%d\n%d", &x, &z);

    while (z <= x)
    {
        scanf("%d", &z);
    }

    for (i = x;; i++)
    {
        sum = sum + i;
        x++;
        c++;
        if (sum > z)
        {
            break;
        }
    }

    printf("%d\n", c);
    return 0;
}