#include <stdio.h>
int main()
{
    int i, j, n, x, sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        scanf("%d", &x);
        for (j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                sum += j;
            }
        }
        if (sum == 1)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
}