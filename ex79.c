#include <stdio.h>

int main()
{
    float nota[20];
    float notas = 0;
    float media;
    int cont = 0;
    int i;

    for (i = 0; i < 20; i++)
    {
        printf("Digite a nota do %dº aluno: \n", i + 1);
        scanf("%f", &nota[i]);
        notas += nota[i];
    }

    media = notas / 20;

    for (i = 0; i < 20; i++)
    {
        if (nota[i] > media)
        {
            cont++;
        }
    }

    printf("A media da turma e: \n%.2f", media);
    printf("\nA quantidade de alunos que tiraram a nota maior que a media da turma foi: \n%d", cont);
}