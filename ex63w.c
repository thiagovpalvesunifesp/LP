#include <stdio.h>

int main()
{
    int i;
    int numeros, soma = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &numeros);
        soma += numeros;
    }
    printf("A soma dos numeros e: %d", soma);
}