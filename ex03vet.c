#include <stdio.h>

int main()
{
    float vet[10], quad[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: \n");
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        quad[i] = vet[i] * vet[i];
    }

    printf("Numeros lidos: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", vet[i]);
    }

    printf("Quadrado de cada: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", quad[i]);
    }
}