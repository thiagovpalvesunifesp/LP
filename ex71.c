#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, n;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    float vet[n];
    float maior, soma = 0, media;

    for (i = 0; i < n; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &vet[i]);
    }

    maior = vet[0];

    for (i = 0; i < n; i++)
    {
        soma += vet[i];

        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    media=soma/n;
    
    printf("O maior valor é: %.2f\n", maior);
    printf("A média é: %.2f\n", media);
}