#include <stdio.h>

int primo(int n);

int main()
{
    int n, cont = 0;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (primo(i))
        {
            cont++;
        }
    }

    printf("Quantidade de numeros primos ate %d: %d\n", n, cont);
}

int primo(int n)
{
    int divisores = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2)
    {
        return 1;
    }

    return 0;
}