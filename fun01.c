#include <stdio.h>

int dobro(int);

int main()
{
    int n, dobros;
    printf("Digite um valor:\n");
    scanf("%d", &n);
    dobros = dobro(n);
    printf("%d", dobros);
}

int dobro(int n){
    return 2*n;
}