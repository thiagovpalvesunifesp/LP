#include <stdio.h>

int main()
{
    float raio, area;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;
    printf("A area e: %f", area);
}