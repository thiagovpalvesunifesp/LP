#include <stdio.h>

int main()
{
    int mat[5][5];
    int x, lin, col, encontrado = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o valor de [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite o valor a ser buscado:\n");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (x == mat[i][j])
            {
                lin = i;
                col = j;
                encontrado++;
            }
        }
    }

    if (encontrado == 0)
    {
        printf("Valor nao encontrado!");
    }
    else
    {
        printf("Valor encontrado na linha [%d] coluna [%d]!", lin+1, col+1);
    }
}