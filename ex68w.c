#include <stdio.h>

int main()
{
    float valor, media, total = 0;
    int i, nmercadorias;

    printf("Digite o numero de mercadorias: ");
    scanf("%d", &nmercadorias);

    for (i = 1; i <= nmercadorias; i++)
    {
        printf("Digite o valor de cada mercadoria: ");
        scanf("%f", &valor);
        total += valor;
    }
    media = total / nmercadorias;
    printf("O valor em estoque e: \n%.2f", total);
    printf("\na media e: \n%.2f", media);
}