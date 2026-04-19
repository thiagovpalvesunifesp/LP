#include <stdio.h>

int main()
{
    int n;

    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &n);

    int a[n], b[n], soma[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o(s) valor(es) do vetor a: \n");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Digite o(s) valor(es) do vetor b: \n");
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        soma[i] = a[i] + b[i];
    }
    printf("Resultado das somas: \n");
    for (int i = 0; i < n; i++)
    {
        printf("soma de %d: %d\n",i+1, soma[i]);
    }
}