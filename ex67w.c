#include <stdio.h>

int main()
{
    int i, soma = 0;
    float media;

    for (i = 15; i <= 100; i++)
    {
        soma += i;
    }
    media = soma / 86.0;
    printf("A media de 15 ate 100 e de: %.2f", media);
}