#include <stdio.h>

int main()
{
    float notas[15], media, soma=0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite a nota %d:\n", i+1);
        scanf("%f", &notas[i]);
        soma+=notas[i];
    }
    media= soma/15;

    printf("A media geral da turma e: %.2f", media);
    
}