#include <stdio.h>
int main()
{

    int N;

    scanf("%d", &N);

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00", N / 100);
    N %= 100;
    printf("\n%d nota(s) de R$ 50,00", N / 50);
    N %= 50;
    printf("\n%d nota(s) de R$ 20,00", N / 20);
    N %= 20;
    printf("\n%d nota(s) de R$ 10,00", N / 10);
    N %= 10;
    printf("\n%d nota(s) de R$ 5,00", N / 5);
    N %= 5;
    printf("\n%d nota(s) de R$ 2,00", N / 2);
    N %= 2;
    printf("\n%d nota(s) de R$ 1,00\n", N / 1);
    N %= 1;

    return 0;
}