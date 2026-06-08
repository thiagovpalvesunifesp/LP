#include <stdio.h>

int menor(int vet[], int n)
{
    if (n == 1)
        return vet[0];

    int m = menor(vet, n - 1);

    if (vet[n - 1] < m)
        return vet[n - 1];

    return m;
}

int main()
{
    int vet[5] = {7, 3, 9, 1, 5};

    printf("Menor = %d\n", menor(vet, 5));

    return 0;
}