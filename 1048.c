#include <stdio.h>

int main()
{
    double salary, newSalary, earned;

    scanf("%lf", &salary);

    if (salary <= 400.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", (salary + (salary * .15)), salary * .15, 15);
    }
    else if (salary <= 800.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", (salary + (salary * .12)), salary * .12, 12);
    }
    else if (salary <= 1200.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", (salary + (salary * .10)), salary * .10, 10);
    }
    else if (salary <= 2000.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", (salary + (salary * .07)), salary * .07, 7);
    }
    else
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", (salary + (salary * .04)), salary * .04, 4);
    }

    return 0;
}