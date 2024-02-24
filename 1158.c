#include <stdio.h>
int main()
{
    int i, j, n, m, x, y, sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        sum = 0;
        for (j = 0; j < y; j++)
        {
            if (x % 2 == 0)
            {

                x++;
            }

            sum += x;
            x++;
        }
        printf("%d\n", sum);
    }
}