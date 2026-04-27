#include <stdio.h>

int main()
{
    int val[6];

    for (int i = 0; i < 6; i++)
    {
        printf("digite o valor: \n");
        scanf("%d", &val[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", val[i]);
    }
}