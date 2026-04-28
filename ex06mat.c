#include <stdio.h>

int main()
{
    int mat1[4][4];
    int mat2[4][4];
    int mat3[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat1[i][j] > mat2[i][j])
            {
                mat3[i][j] = mat1[i][j];
            }
            else
            {
                mat3[i][j] = mat2[i][j];
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}