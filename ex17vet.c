#include <stdio.h>

int main()
{
    int vet[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da pos %d:\n", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            vet[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vet[i]);
    }
}