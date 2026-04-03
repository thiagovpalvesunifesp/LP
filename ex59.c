#include <stdio.h>

int main()
{
    float a1, a2, a3;
    printf("Digite o valor do a1: ");
    scanf("%f", &a1);
    printf("Digite o valor do a2: ");
    scanf("%f", &a2);
    printf("Digite o valor do a3: ");
    scanf("%f", &a3);

    if (a1 > 90 || a2 > 90 || a3 > 90)
    {
        printf("e um triangulo obstusangulo.");
    }
    else if (a1 == 90 || a2 == 90 || a3 == 90)
    {
        printf("e um triangulo retangulo.");
    }
    else
    {
        printf("e um acutangulo");
    }
}