#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Digite o valor em metros: ");
    scanf("%f", &n1);
    n2 = n1 * 100;
    printf("O valor em cm é: %.2f cm", n2);
}
