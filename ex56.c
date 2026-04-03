#include <stdio.h>

int main()
{
    int n1, n2, op;
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);
    printf("Digite a operação desejada +->1, -->2, /->3 e *->4: ");
    scanf("%d", &op);

    if (op == 1)
    {
        op = n1 + n2;
        printf("O valor da soma é: %d", op);
    }
    else if (op == 2)
    {
        op = n1 - n2;
        printf("O valor da subtraçao é: %d", op);
    }
    else if (op == 3)
    {
        op = n1 / n2;
        printf("O valor da divisao é: %d", op);
    }
    else
    {
        op = n1 * n2;
        printf("O valor da multiplicacao é: %d", op);
    }
}