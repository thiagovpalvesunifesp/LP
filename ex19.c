#include <stdio.h>

int main()
{
    float comp, alt, lar, area;
    int caixas;
    printf("Digite a altura: ");
    scanf("%f", &alt);
    printf("Digite a largura: ");
    scanf("%f", &lar);
    printf("Digite o comprimento: ");
    scanf("%f", &comp);
    area = 2 * (comp * alt) + 2 * (lar * alt);
    caixas = area / 1.5;
    printf("O numero de caixas sera: %d", caixas);
}