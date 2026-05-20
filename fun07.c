#include <stdio.h>

float fahrenheit(float);

int main()
{
    float temp, convertido;

    printf("Diga a temp:\n");
    scanf("%f", &temp);

    convertido = fahrenheit(temp);

    printf("A temperatura convertida e:\n%.2f", convertido);
}

float fahrenheit(float temp)
{
    return  temp * (9.0/5.0) + 32.0;
}