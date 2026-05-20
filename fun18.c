#include<stdio.h>

int potencia(int, int);

int main(){
    int exp, base, pot;

    printf("Base:\n");
    scanf("%d", &base);
    printf("Expoente:\n");
    scanf("%d", &exp);

    pot=potencia(base,exp);

    printf("%d", pot);
}

int potencia(int base, int expo){
    int resultado = 1;

    for (int i = 0; i < expo; i++)
    {
        resultado = resultado * base;
    }

    return resultado;
}