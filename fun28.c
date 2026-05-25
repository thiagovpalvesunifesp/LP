#include <stdio.h>

float fatorial(int n)
{
    float fat = 1;

    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

float cosseno(float angulo)
{
    float pi = 3.141593;
    float rad, cos = 0;

    rad = angulo * pi / 180;

    for (int n = 0; n <= 5; n++)
    {
        float termo;

        termo = 1;

        for (int i = 0; i < 2 * n; i++)
        {
            termo *= rad;
        }

        termo = termo / fatorial(2 * n);

        if (n % 2 != 0)
        {
            termo = -termo;
        }

        cos += termo;
    }

    return cos;
}

int main()
{
    float angulo;

    printf("Digite o angulo em graus: ");
    scanf("%f", &angulo);

    printf("Cosseno aproximado = %.6f\n", cosseno(angulo));

    return 0;
}