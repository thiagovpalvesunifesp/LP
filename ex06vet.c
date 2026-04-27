#include <stdio.h>

int main()
{
    int vet[10], maior, menor;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    menor = vet[0];

    for (int i = 1; i < 10; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }

    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d", menor);
}