#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    int hab, somafil = 0;
    int cont150=0;

    printf("Digite o nº de habitantes da cidade: ");
    scanf("%d", &hab);

    float mediasal, mediafil, somasal = 0, maior, salario[hab], percentual;
    int filhos[hab];

    for (i = 0; i < hab; i++)
    {
        printf("Digite o número de filhos do %dº habitante: ", i + 1);
        scanf("%d", &filhos[i]);
        somafil += filhos[i];
    }

    for (i = 0; i < hab; i++)
    {
        printf("Digite o salário do %dº habitante: ", i + 1);
        scanf("%f", &salario[i]);
        somasal += salario[i];

        if (salario[i] < 150)
    {
        cont150++;
    }
    }

    maior = salario[0];

    for (i = 0; i < hab; i++)
    {
        if (salario[i] > maior)
        {
            maior = salario[i];
        }
    }
    mediafil = (float)somafil / (float)hab;
    mediasal = somasal / hab;

    percentual = (cont150 *100)/ hab;

    printf("A media de salário da população é: %.2f\n", mediasal);
    printf("A media de filhos da população é: %.2f\n", mediafil);
    printf("O maior salário da população é: %.2f\n", maior);
    printf("O percentual de salários menores do que 150 reais da população é: %.2f%%\n", percentual);
}