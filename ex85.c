#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float temp[365];
    float maior, menor, media, soma = 0;
    int dias = 0;
    srand(time(NULL));

    for (int i = 0; i < 365; i++)
    {
        temp[i] = ((rand() % 510) / 10.0) - 10;
        soma += temp[i];
    }
    menor = temp[0];
    maior = temp[0];

    for (int i = 0; i < 365; i++)
    {
        if (temp[i] < menor)
        {
            menor = temp[i];
        }
    }

    for (int i = 0; i < 365; i++)
    {
        if (temp[i] > maior)
        {
            maior = temp[i];
        }
    }
    media = soma / 365;

    for (int i = 0; i < 365; i++)
    {
        if (temp[i] < media)
        {
            dias++;
        }
    }
    printf("A maior temperatura foi: \n%.2f\n", maior);
    printf("A menor temperatura foi: \n%.2f\n", menor);
    printf("A temperatura media anual foi: \n%.2f\n", media);
    printf("O numero de dias com temperatura inferior a media anual foi: \n%d", dias);
}