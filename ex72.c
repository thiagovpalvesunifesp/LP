#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    int codigo[15];
    float preco[15], maior, soma, media;

    for (i = 0; i < 15; i++)
    {
        printf("Digite o código do %dº produto: ", i + 1);
        scanf("%d", &codigo[i]);
    }
    for (i = 0; i < 15; i++)
    {
        printf("Digite o preço do %dº produto: ", i + 1);
        scanf("%f", &preco[i]);
    }
    maior = preco[0];

    for (i = 0; i < 15; i++)
    {
        soma += preco[i];

        if (preco[i] > maior)
        {
            maior = preco[i];
        }
    }
    media = soma / 15;

    printf("O maior preço lido é: %.2f\n", maior);
    printf("A media dos preços lidos é: %.2f\n", media);
}
