#include <stdio.h>

int main()
{
    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("O primeiro e maior que o segundo.");
    }
    else if (n1 == n2)
    {
        printf("Os numeros sao iguais.");
    }
    else
    {
        printf("O segundo é maior que o primeiro.");
    }
}