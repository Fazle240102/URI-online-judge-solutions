#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, greatest;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    greatest = (a + b + abs(a - b)) / 2;
    greatest = (greatest + c + abs(greatest - c)) / 2;

    printf("%d eh o maior\n", greatest);

    return 0;
}