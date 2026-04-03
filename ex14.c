#include <stdio.h>

int main()
{
    int carros;
    float salariofix, comicao, valorvendas, salariofin;
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carros);
    printf("Digite o valor das vendas: ");
    scanf("%f", &valorvendas);
    printf("Digite o salario fixo: ");
    scanf("%f", &salariofix);
    printf("Digite o valor que recebe por carro: ");
    scanf("%f", &comicao);
    salariofin = salariofix + comicao * carros + valorvendas * 0.05;
    printf("O salario sera: %f reais", salariofin);
}