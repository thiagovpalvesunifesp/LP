#include <stdio.h>

int main()
{
    int q[20];
    int menor, posicao;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &q[i]);
        while (q[i] < 0)
        {
            printf("Digite um valor maior que 0: \n");
            scanf("%d", &q[i]);
        }
    }

    menor = q[0];
    posicao = 0;

    for (int i = 0; i < 19; i++)
    {
        if (q[i] < menor)
        {
            menor = q[i];
            posicao = i;
        }
    }

    printf("O menor valor e: \n%d\ne esta na posicao: \n%d", menor, posicao+1);
}