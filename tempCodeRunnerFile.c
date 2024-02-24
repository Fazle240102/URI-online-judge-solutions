#include <stdio.h>
int main()
{
    int i, j, t, pa, pb;
    double g1, g2;

    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        for (j = 0; pa <= pb; j++)
        {
            pa += pa * (g1 / 100);
            pb += pb * (g2 / 100);

            if (j > 100)
            {
                break;
            }
        }
        if (j > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {

            printf("%d anos.\n", j);
        }
    }
}