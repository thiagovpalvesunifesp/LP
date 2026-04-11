#include <stdio.h>

int main()
{
    int i, valor;
    int dentro = 0, fora = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    printf("Dentro do intervalo [10,20]: %d\n", dentro);
    printf("Fora do intervalo: %d\n", fora);

    return 0;
}