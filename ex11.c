#include <stdio.h>

int main()
{
    float pvb, pvn, pvv, eleitorestt, vb, vn, vv;
    printf("Digite o total de eleitores: ");
    scanf("%f", &eleitorestt);
    printf("Digite o total de votos em branco: ");
    scanf("%f", &vb);
    printf("Digite o total de votos nulos: ");
    scanf("%f", &vn);
    printf("Digite o total de votos validos: ");
    scanf("%f", &vv);
    pvb = (vb * 100) / eleitorestt;
    pvn = (vn * 100) / eleitorestt;
    pvv = (vv * 100) / eleitorestt;
    printf("Em branco: %.2f, Nulo: %.2f e Validos: %.2f", pvb, pvn, pvv);
}