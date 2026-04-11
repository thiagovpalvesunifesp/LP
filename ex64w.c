#include <stdio.h>

int main()
{
    int i;
    int soma = 0, n;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n < 40)
        {
            soma += n;
        }
    }
    printf("O valor da soma dos menores que 40 e: %d", soma);
}