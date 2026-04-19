#include <stdio.h>

int main()
{
    int a[10], m[10];
    int n;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &a[i]);
    }
    
    printf("Digite o valor que vai multiplicar: \n");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        m[i]= n*a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("O valor de %d * %d e: \n%d\n",a[i], n, m[i]);
    }
}