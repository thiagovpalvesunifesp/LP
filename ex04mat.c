#include <stdio.h>

int main()
{
    int mat[4][4], poslin, poscol, maior;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao [%d][%d]:\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    maior = mat[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
                poslin = i;
                poscol = j;
            }
        }
    }

    printf("O maior valor (%d) esta na linha [%d] coluna [%d].",maior, poslin+1, poscol+1);
}