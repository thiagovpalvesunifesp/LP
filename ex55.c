#include <stdio.h>

int main()
{
    int n;
    float l1, l2, l3, perimetro, area;
    printf("Quantos lados tem o poligono?: ");
    scanf("%d", &n);
    if (n == 3)
    {
        printf("Digite o valor de l1: ");
        scanf("%f", &l1);
        printf("Digite o valor de l2: ");
        scanf("%f", &l2);
        printf("Digite o valor de l3: ");
        scanf("%f", &l3);
        perimetro = l1 + l2 + l3;
        printf("O poligono e um triangulo com perimetro de: %f", perimetro);
    }
    else if (n == 4)
    {
        printf("Digite o valor do lado: ");
        scanf("%f", &l1);
        area = l1 * l1;
        printf("O poligono e um quadrado de area: %f", area);
    }
    else if (n < 3)
    {
        printf("Isso nao e um poligono.");
    }
    else if (n > 5)
    {
        printf("poligono nao identificado.");
    }
    else
    {
        printf("O poligono e um pentagono.");
    }
}