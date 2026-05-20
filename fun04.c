#include <stdio.h>

int quadrado(int);

int main()
{
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    if (quadrado(n))
        printf("eh perfeito");
    else
        printf("nao eh perfeito");
}

int quadrado(int n)
{

    if (n < 0)
        return 0;

    for (int i = 0; i * i <= n; i++)
    {
        if (i * i == n)
        {
            return 1;
        }
    }
    return 0;
}