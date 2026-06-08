#include <stdio.h>

void imprime(int vet[], int n, int i)
{
    if (i == n)
        return;

    printf("%d ", vet[i]);

    imprime(vet, n, i + 1);
}

int main()
{
    int vet[5] = {10, 20, 30, 40, 50};

    imprime(vet, 5, 0);

    return 0;
}