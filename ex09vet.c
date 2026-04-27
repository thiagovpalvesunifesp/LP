#include <stdio.h>

int main()
{
    int vet[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor par:\n");
        scanf("%d", &vet[i]);
        while (vet[i] % 2 != 0)
        {
            printf("Voce deve digitar valores pares!");
            scanf("%d", &vet[i]);
        }
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%d\n", vet[i]);
    }
}