#include <stdio.h>

int main()
{
    int vet[50], rep = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vet[50]);
    }

    for (int i = 0; i < 50; i++)
    {
        for (int j = i + 1; j < 50; j++)
        {
            if (vet[i] == vet[j])
            {
                printf("Numero %d repetido nas posicoes %d e %d\n", vet[i], i, j);
                rep = 1;
            }
        }
    }
    if (rep == 0)
    {
        printf("Nao existem numeros repetidos.\n");
    }
}