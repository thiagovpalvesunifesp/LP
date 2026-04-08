#include <stdio.h>

int main()
{
    float n1, n2, divisao;
    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);
    while (n2 == 0)
    {
        printf("Valor invalido!\nDigite n2: ");
        scanf("%f", &n2);
    }
    divisao = n1 / n2;
    printf("O valor de n1/n2 é: %f", divisao);
}