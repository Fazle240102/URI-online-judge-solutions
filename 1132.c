#include <stdio.h>
int main()
{
    int i, x, y, sum = 0;
    scanf("%d %d", &x, &y);
    if (x < y)
    {

        for (i = x; i <= y; i++)
        {
            if (i % 13 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    else if (x > y)
    {
        for (i = y; i <= x; i++)
        {
            if (i % 13 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
}