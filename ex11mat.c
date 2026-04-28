#include <stdio.h>

int main()
{
    int mat[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            if (j + i == 2)
            {
                soma += mat[i][j];
            }
        }
    }

    printf("Soma dos elementos acima da diagonal secundaria: %d\n", soma);
}