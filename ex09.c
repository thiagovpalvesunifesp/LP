#include <stdio.h>
int main()
{
    float l, area, dobro;
    printf("Digite o valor do lado: ");
    scanf("%f", &l);
    area = l * l;
    dobro = 2 * area;
    printf("O valor do dobro da área do quadrado é: %f ", dobro);
}