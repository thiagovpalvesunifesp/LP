#include <stdio.h>

int main()
{
    int n1, n2, i, soma = 0;
    int inicio, fim;
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        fim = n1;
        inicio = n2;
    }
    else
    {
        inicio = n1;
        fim = n2;
    }

    for (i = inicio; i <= fim; i++)
    {
        soma += i;
    }
    printf("O valor da soma e: %d", soma);
}