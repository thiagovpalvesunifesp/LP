#include <stdio.h>

int main()
{
    float vet[10], neg = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:\n");
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            neg++;
        }
        else
        {
            soma += vet[i];
        }
    }
    printf("A quantidade de numeros negativos e: %.0f\n", neg);
    printf("A soma dos numeros pares e: %.2f", soma);
}