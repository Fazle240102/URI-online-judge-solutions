#include <stdio.h>
int main()
{
    int product1_code, product2_code;
    double quantity1, quantity2, price1, price2;

    scanf("%d %lf %lf", &product1_code, &quantity1, &price1);
    scanf("%d %lf %lf", &product2_code, &quantity2, &price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", (quantity1 * price1 + quantity2 * price2));

    return 0;
}