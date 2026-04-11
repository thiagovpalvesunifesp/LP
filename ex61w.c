#include <stdio.h>

int main()
{
    float media, n, soma = 0;
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &n);
        soma += n;
    }
    media = soma / 10;
    printf("a media e: \n%.2f", media);
}