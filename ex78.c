#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    char nome[10][50], busca[50];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o nome de uma pessoa: ");
        scanf("%s", nome[i]);
    }

    printf("Digite o nome de quem voce quer buscar: \n");
    scanf("%s", busca);

    for (i = 0; i < 10; i++)
    {
        if (strcmp(busca, nome[i]) == 0)
        {
            printf("Achei!\n");
            return 0;
        }
    }
    printf("Nao achei!");
}