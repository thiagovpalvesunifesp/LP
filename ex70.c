#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    float valor[100], maior, menor;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        valor[i]= rand() % 100;
    }

    maior = valor[0];
    menor = valor[0];

    for (i = 0; i < 100; i++)
    {
        if (valor[i] > maior)
        {
            maior = valor[i];
        }
        if (valor[i] < menor)
        {
            menor = valor[i];
        }
    }

    printf("O maior valor é: %.0f\n", maior);
    printf("O menor valor é: %.0f\n", menor);
}