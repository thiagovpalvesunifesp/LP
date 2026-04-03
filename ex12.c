#include <stdio.h>

int main()
{
    float salario, reajuste, aumento, salarionovo;
    printf("Digite seu salario atual: ");
    scanf("%f", &salario);
    printf("Digite o reajuste: ");
    scanf("%f", &reajuste);
    aumento = salario * reajuste / 100;
    salarionovo = salario + aumento;
    printf("Seu novo salario e: %f", salarionovo);
}