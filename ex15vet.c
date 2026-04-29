#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[20], encontrado = 0;

    
    for (int i = 0; i < 20; i++)
    {
        vet[i] = rand() % 20;
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (vet[i] == vet[j])
            {
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0)
        {
            printf("%d ", vet[i]);
        }
    }
}