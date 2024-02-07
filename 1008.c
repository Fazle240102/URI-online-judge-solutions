#include <stdio.h>
int main()
{
    int number, work_hour;
    double amount;

    scanf("%d", &number);
    scanf("%d", &work_hour);
    scanf("%lf", &amount);

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, work_hour * amount);

    return 0;
}