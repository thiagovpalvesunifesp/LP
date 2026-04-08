#include <stdio.h>

int main()
{
    float n1, n2, divisao;
    printf("Digite n1: ");
    scanf("%f", &n1);

    do
    {
        printf("Digite n2: ");
        scanf("%f", &n2);
        if (n2 == 0)
        {
            printf("O valor deve ser diferente de 0\n");
        }

    } while (n2 == 0);

    divisao = n1 / n2;
    printf("O valor de n1/n2 é: %f", divisao);
}