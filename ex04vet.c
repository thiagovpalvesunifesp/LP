#include <stdio.h>

int main()
{
    int vet[8], x, y, soma;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    printf("Digite o valor de y:\n");
    scanf("%d", &y);

    while (x < 0 || x > 7 || y < 0 || y > 7)
    {
        printf("Posicao invalida! Digite novamente:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    
    soma = vet[x] + vet[y];
    printf("A some e:\n%d", soma);
}