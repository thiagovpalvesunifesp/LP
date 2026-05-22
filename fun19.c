#include <stdio.h>

int maiorFatorPrimo(int n)
{
    int maior = 1;

    while (n % 2 == 0)
    {
        maior = 2;
        n = n / 2;
    }

    for (int i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            maior = i;
            n = n / i;
        }
    }

    return maior;
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Maior fator primo: %d\n", maiorFatorPrimo(num));

    return 0;
}