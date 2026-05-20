#include <stdio.h>

void dataextenso(int, int, int);

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    dataextenso(dia, mes, ano);

}

void dataextenso(int dia, int mes, int ano)
{
    char meses[12][20] = {
        "Janeiro", "fevereiro", "março", "abril",
        "maio", "junho", "julho", "agosto",
        "setembro", "outubro", "novembro", "dezembro"
    };

    printf("%d de %s de %d", dia, meses[mes - 1], ano);
}