#include <stdio.h>
int main()
{
    int i, x, sum;
    while (1)
    {
        scanf("%d", &x);
        sum = 0;
        if (x == 0)
        {
            break;
        }
        for (i = 0; i < 5; i++)
        {
            if (x % 2 != 0)
            {

                x++;
            }

            sum += x;
            x++;
        }
        printf("%d\n", sum);
    }
}