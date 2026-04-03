#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    float kmi, kmf, lcomb, receb, media, lucro;
    printf("Digite os km iniciais: ");
    scanf("%f", &kmi);
    printf("Digite os km finais: ");
    scanf("%f", &kmf);
    printf("Digite os litros de combustivel gastos: ");
    scanf("%f", &lcomb);
    printf("Digite o quanto recebeu: ");
    scanf("%f", &receb);
    media = (kmf - kmi) / lcomb;
    lucro = receb - 2.9 * lcomb;
    printf("A media de consumo foi de: %f km/l. E o lucro foi de: %f reais", media, lucro);
}