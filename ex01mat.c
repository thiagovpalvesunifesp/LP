#include <stdio.h>

int main()
{
    int mat[4][4], mai = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite um valor:\n");
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] > 10)
            {
                mai++;
            }
        }
    }
    printf("A matriz possui %d numero(s) maiores que 10.", mai);
}