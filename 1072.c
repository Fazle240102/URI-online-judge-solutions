#include <stdio.h>

int main()
{
    int N, X, i, out = 0, in = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);

        if (X < 10 || X > 20)
        {
            out += 1;
        }

        if (X >= 10 && X <= 20)
        {
            in += 1;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}