#include <stdio.h>
int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x >= (y + z) || y >= (x + z) || z >= (x + y))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (x * x == (y * y + z * z) || y * y == (x * x + z * z) || z * z == (x * x + y * y))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (x * x > (y * y + z * z) || y * y > (x * x + z * z) || z * z > (x * x + y * y))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (x * x < (y * y + z * z) || y * y < (x * x + z * z) || z * z < (x * x + y * y))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (x == y && x == z)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (x == y && x != z || x == z && x != y || z == y && z != x)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}