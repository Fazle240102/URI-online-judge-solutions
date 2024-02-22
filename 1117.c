#include <stdio.h>
int main()
{
    double x, sum = 0;
    while (1)
    {
        scanf("%lf", &x);

        if (x >= 0 && x <= 10)
        {
            sum = sum + x;

            if (sum > x)
            {

                printf("media = %.2lf", sum / 2.0);
                break;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}