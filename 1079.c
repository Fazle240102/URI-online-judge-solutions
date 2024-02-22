#include <stdio.h>

int main()
{
    int i, N;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        double a, b, c, avg;

        scanf("%lf %lf %lf", &a, &b, &c);

        avg = ((a * 2 + b * 3 + c * 5) / (2 + 3 + 5));

        printf("%.1lf\n", avg);
    }

    return 0;
}
