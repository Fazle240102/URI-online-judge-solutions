#include <stdio.h>
int main()
{
    int i, j, j_init = 7;
    for (i = 1; i <= 9; i += 2)
    {

        for (j = j_init; j >= j_init - 2; j -= 1)
        {

            printf("I=%d J=%d\n", i, j);
        }

        j_init += 2;
    }
    return 0;
}
