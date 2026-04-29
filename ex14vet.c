#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int vet[10], igual = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 10;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vet[i] == vet[j])
            {
                printf("O vetor possui o valor %d igual.", vet[i]);
                igual=1;
                break;
            }
        }
    }
    if (igual == 0)
    {
        printf("Nao existem valores iguais!");
    }
}
