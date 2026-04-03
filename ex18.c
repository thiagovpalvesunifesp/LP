#include <stdio.h>

int main()
{
    float pot, potnec, largura, comprimento, area;
    int nlamp;
    printf("Digite a potencia da lampada: ");
    scanf("%f", &pot);
    printf("Digite a largura do comodo: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    potnec = area * 18;
    nlamp = potnec / pot;
    printf("O numero de lampadas necessarias sera: %d", nlamp);
}