#include <stdio.h>

int main()
{
    int v1[15], v2[15], encontrado = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um valor para v1[%d]: \n", i);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um valor para v2[%d]: \n", i);
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        if (v1[i] == v2[i])
        {
            encontrado++;
        }
    }
    printf("O numero de valores iguais na mesma posicao e: %d", encontrado);
}