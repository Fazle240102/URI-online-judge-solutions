#include <stdio.h>

int main()
{
    double x;
    int i, count;

    for (i = 1; i <= 6; i++)
    {

        scanf("%lf", &x);

        if (x > 0)
        {
            count += 1;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}