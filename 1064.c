#include <stdio.h>

int main()
{
    double x, sum = 0;
    int i, count = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%lf", &x);

        if (x > 0)
        {
            sum += x;
            count++;
        }
    }

    double avg = sum / count;

    printf("%d valores positivos\n", count);
    printf("%.1lf\n", avg);

    return 0;
}