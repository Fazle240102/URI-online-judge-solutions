#include <stdio.h>

int main()
{
    int i, N, multiply;

    scanf("%d", &N);

    for (i = 1; i <= 10; i++)
    {
        multiply = i * N;

        printf("%d x %d = %d\n", i, N, multiply);
    }

    return 0;
}