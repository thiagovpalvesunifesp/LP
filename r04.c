#include <stdio.h>

int potencia(int k, int n)
{
    if (n == 0)
        return 1;

    return k * potencia(k, n - 1);
}

int main()
{
    int k, n;

    printf("Digite a base: ");
    scanf("%d", &k);

    printf("Digite o expoente: ");
    scanf("%d", &n);

    printf("Resultado = %d\n", potencia(k, n));

    return 0;
}