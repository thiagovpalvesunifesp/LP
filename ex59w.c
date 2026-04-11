#include <stdio.h>

int main()
{
    int i, valor;
    int cont = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("digite um valor: ");
        scanf("%d", &valor);
        if (valor < 0)
        {
            cont++;
        }
    }
    printf("O numero de negativos sao: %d", cont);
}