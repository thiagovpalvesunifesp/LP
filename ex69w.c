#include <stdio.h>

int main()
{
    float valor, media, total = 0;
    int cont = 0;
    char op;

    do
    {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);

        total += valor;
        cont++;

        printf("Deseja adicionar mais mercadorias?(S/N): ");
        scanf(" %c", &op);

    } while (op == 'S' || op == 's');

    media = total / cont;
    printf("O valor em estoque e: \n%.2f", total);
    printf("\na media e: \n%.2f", media);
}