#include <stdio.h>

int main()
{
    int vet[30], n, aparicao = 0;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor a ser buscado: \n");
    scanf("%d", &n);

    for (int i = 0; i < 30; i++)
    {
        if (n == vet[i])
        {
            aparicao++;
        }
    }
    printf("O numero de vezes que o valor aparece no vetor e: \n%d", aparicao);
}