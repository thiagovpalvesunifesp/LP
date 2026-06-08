#include <stdio.h>

int multipRec(int n1, int n2)
{
    if (n2 == 0)
        return 0;

    return n1 + multipRec(n1, n2 - 1);
}

int main()
{
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    printf("%d\n", multipRec(a, b));

    return 0;
}