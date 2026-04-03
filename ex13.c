#include <stdio.h>

int main()
{
    float custofinal, custofab;
    printf("Digite o custo de fabrica: ");
    scanf("%f", &custofab);
    custofinal = custofab * 1.28 * 1.45;
    printf("O custo final ao consumidor sera: %f", custofinal);
}
