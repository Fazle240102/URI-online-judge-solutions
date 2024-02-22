#include <stdio.h>
int main()
{
    int x, a_sum = 0, g_sum = 0, d_sum = 0;

    while (1)

    {
        scanf("%d", &x);
        if (x > 0 && x < 4)
        {
            if (x == 1)
            {
                a_sum = a_sum + 1;
            }
            else if (x == 2)
            {
                g_sum = g_sum + 1;
            }
            else if (x == 3)
            {
                d_sum = d_sum + 1;
            }
        }
        else if (x == 4)
        {
            break;
        }

        else
        {
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a_sum);
    printf("Gasolina: %d\n", g_sum);
    printf("Diesel: %d\n", d_sum);
}