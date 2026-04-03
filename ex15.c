#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    printf("Escreva o valor em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = 5 * (fahrenheit - 32) / 9;
    printf("O valor em celcius sera de: %f", celcius);
}