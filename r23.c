#include <stdio.h>

int somaVetor(int vet[], int n)
{
    if (n == 0)
        return 0;

    return vet[n - 1] + somaVetor(vet, n - 1);
}

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};

    printf("Soma = %d\n", somaVetor(vet, 5));

    return 0;
}