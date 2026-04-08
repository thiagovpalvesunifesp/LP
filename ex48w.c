#include <stdio.h>

int main()
{
    float n1, n2, media;
    char novo;
    do
    {
        printf("Digite a nota 1: ");
        scanf("%f", &n1);

        while (n1 < 0 || n1 > 10)
        {
            printf("Digite um valor entre 0 e 10: \n");
            scanf("%f", &n1);
        }

        printf("Digite a nota 2: ");
        scanf("%f", &n2);

        while (n2 < 0 || n2 > 10)
        {
            printf("Digite um valor entre 0 e 10: \n");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;
        printf("A media e: %.2f\n", media);

        printf("Voce quer fazer outro calculo? (S/N): ");
        scanf(" %c", &novo);
    } while (novo == 'S' || novo == 's');
}