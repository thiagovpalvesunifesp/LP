#include <stdio.h>

int main()
{
    int i;
    int cont = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i);
        cont++;
    }
    printf("\na quantidade de numero e: %d", cont);
}