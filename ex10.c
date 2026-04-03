#include <stdio.h>

int main()
{
    float ph, salario;
    int hr;
    printf("Digite o quanto ganha por hora: ");
    scanf("%f", &ph);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &hr);
    salario = ph * hr;
    printf("Seu salario do mes: %f reais", salario);
}