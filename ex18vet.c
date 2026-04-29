#include <stdio.h>

int main()
{
    int vet[10], x, enc=0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da pos %d:\n", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de x:\n");
    scanf("%d", &x);

    printf("Valores multiplos de %d: ", x);
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % x == 0)
        {
            printf("%d ", vet[i]);
            enc++;
        }
    }
    if (enc == 0)
    {
        printf("Nenhum!");
    }
}