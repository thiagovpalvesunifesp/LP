#include <stdio.h>

long long fatorial(int n)
{
    long long fat = 1;

    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

int somaAlgarismosFatorial(int n)
{
    long long fat = fatorial(n);
    int soma = 0;

    while (fat > 0)
    {
        soma += fat % 10; 
        fat = fat / 10;   
    }

    return soma;
}

int main()
{
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Soma dos algarismos de %d! = %d\n",
           n, somaAlgarismosFatorial(n));

    return 0;
}