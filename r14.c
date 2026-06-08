#include <stdio.h>

void imprimeSerie(int i, int j, int k)
{
    if (i > j)
        return;

    printf("%d ", i);

    imprimeSerie(i + k, j, k);
}

int main()
{
    imprimeSerie(1, 10, 2);

    return 0;
}