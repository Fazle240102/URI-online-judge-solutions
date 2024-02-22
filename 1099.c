#include <stdio.h>

int main()
{
    int i, N, X, Y;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);

        int sum = 0;

        if (X < Y)
        {
            for (int i = X + 1; i < Y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        else if (X > Y)
        {
            for (int i = Y + 1; i < X; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
