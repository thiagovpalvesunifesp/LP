#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];

    printf("Digite um nome:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';

    if (nome[0] == 'a' || nome[0] == 'A')
        printf("%s", nome);
    else
        printf("diferente de a ou A!");
}