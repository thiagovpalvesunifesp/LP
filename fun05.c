#include <stdio.h>

float volumeesfera(float);

int main()
{
    float raio, volume;

    printf("Diga o raio:\n");
    scanf("%f", &raio);

    volume = volumeesfera(raio);

    printf("O volume e:\n%.2f", volume);
}

float volumeesfera(float raio)
{
    float pi = 3.1415;
    return (4 / 3) * pi * raio * raio * raio;
}