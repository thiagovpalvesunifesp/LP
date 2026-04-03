#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float comp, voltas, reabas, consu, min, tamanho;
    printf("Digite o comprimento da pista em metros: ");
    scanf("%f", &comp);
    printf("Digite o número total de voltas: ");
    scanf("%f", &voltas);
    printf("Digite o número de reabastecimentos desejado: ");
    scanf("%f", &reabas);
    printf("Digite o consumo do carro em Km/L: ");
    scanf("%f", &consu);
    tamanho = (voltas * comp) / 1000;
    min = (tamanho / reabas) / consu;
    printf("O número mínimo de litros até o primeiro reabastecimento é: %f Litros", min);
}