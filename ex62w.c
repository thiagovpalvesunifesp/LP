#include <stdio.h>

int main()
{
    int alunos;
    int i;
    float notas, totalnotas, media;
    printf("Digite o numero de alunos da sala: ");
    scanf("%d", &alunos);

    for (i = 1; i <= alunos; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas);
        totalnotas += notas;
    }

    media = totalnotas / alunos;
    printf("A media das notas e: %.2f", media);
}