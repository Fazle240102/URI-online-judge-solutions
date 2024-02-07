#include <stdio.h>
int main()
{
    char name;

    double salary, sale;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sale);

    printf("TOTAL = R$ %.2f\n", (salary + sale * .15));

    return 0;
}