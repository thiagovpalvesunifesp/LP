#include <stdio.h>

int main()
{
    int vet[10], par = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            par++;
        }
    }
    printf("O vetor possui %d numeros pares", par);
}