#include <stdio.h>

int main()
{
    int v[20], novo[20];
    int x, encontrado = 0, j = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nDigite o numero a ser removido: ");
    scanf("%d", &x);

    for (int i = 0; i < 20; i++)
    {
        if (v[i] == x)
        {
            encontrado = 1;
        }
        else
        {
            novo[j] = v[i];
            j++;
        }
    }

    if (encontrado)
    {
        printf("\nNovo vetor sem o numero %d:\n", x);
        for (int i = 0; i < j; i++)
        {
            printf("%d ", novo[i]);
        }
    }
    else
    {
        printf("\nO numero nao existe no vetor.\n");
    }
}