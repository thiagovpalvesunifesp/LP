#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], sexo;
    int idade;

    printf("Digite o nome:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';

    do
    {
        printf("Digite o sexo (m) masculino ou (f) feminino:\n");
        scanf("%c", &sexo);
    } while (sexo != 'm' && sexo != 'f');

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    if (sexo == 'f' && idade<25)
    {
        printf("Aceito\n%s", nome);
    }
    else{
        printf("Nao aceito.");
    }
}