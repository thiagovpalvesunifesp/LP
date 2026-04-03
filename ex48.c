#include <stdio.h>

int main()
{
    float n1, n2, opt, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("O aluno fez prova optativa? caso nao, digite -1, caso sim, digite a nota: ");
    scanf("%f", &opt);
    if (opt == -1)
    {
        media = (n1 + n2) / 2;
    }
    else if (n1 > n2)
    {
        media = (n1 + opt) / 2;
    }
    else
    {
        media = (n2 + opt) / 2;
    }
    if (media >= 6)
    {
        printf("Aluno aprovado com media: %f", media);
    }
    else if (media < 3)
    {
        printf("Aluno reprovado com media: %f", media);
    }
    else
    {
        printf("Aluno de exame com media: %f", media);
    }
}