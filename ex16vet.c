#include <stdio.h>

int main()
{
    float vet[5];
    int cod;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d:\n", i);
        scanf("%f", &vet[i]);
    }

    printf("Digite o codigo:\n");
    scanf("%d", &cod);

    while (cod!=0 && cod!=1 && cod!=2)
    {
        printf("Codigo invalido! Digite novamente:\n");
        scanf("%d", &cod);
    }

    if (cod == 0)
    {
        printf("Programa encerrado!");
    }

    if (cod == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%.2f\n", vet[i]);
        }
    }

    if (cod == 2)
    {
        for (int i = 4; i >= 0; i--)
        {
            printf("%.2f\n", vet[i]);
        }
    }

}