#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];
    int cont;

    printf("Digite o texto:\n");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto) - 1] = '\0';

    cont = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == '1')
        {
            cont++;
        }
    }
    printf("Quantidade de 1's:\n%d", cont);
}