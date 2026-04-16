#include <stdio.h>

int main()
{
    int numeros[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", numeros[i], j, numeros[i] * j);
        }
    }
}