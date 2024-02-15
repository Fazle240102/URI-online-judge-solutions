#include <stdio.h>
int main()
{
    double a, b, c, d, avg, exam;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    avg = (a * 2 + b * 3 + c * 4 + d * 1) / 10;

    printf("Media: %.1lf\n", avg);

    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &exam);

        printf("Nota do exame: %.1lf\n", exam);
        avg = (avg + exam) / 2;

        if (avg >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avg);
    }

    return 0;
}