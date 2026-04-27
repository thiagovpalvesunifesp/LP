#include <stdio.h>

int main()
{
    int vet[10], pos = 0, maior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vet[i]);
    }
    maior = vet[0];

    for (int i = 1; i < 10; i++)
    {
        if (vet[i] > maior)
        {
            maior=vet[i];
            pos = i;
        }
    }
    printf("O maior valor e %d, e esta na posicao %d", maior, pos + 1);
}