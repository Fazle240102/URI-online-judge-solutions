#include <stdio.h>
int main()
{
    int i, j, m, n, sum;
    while (1)
    {
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
        {
            break;
        }
        if (m < n)
        {
            sum = 0;

            for (j = m; j <= n; j++)
            {
                printf("%d ", j);
                sum = sum + j;
            }
            printf("Sum=%d\n", sum);
        }
        if (m > n)
        {
            sum = 0;

            for (j = n; j <= m; j++)
            {
                printf("%d ", j);
                sum = sum + j;
            }
            printf("Sum=%d\n", sum);
        }
    }
}