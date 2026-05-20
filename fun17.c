#include<stdio.h>

int soma(int, int);

int main(){
    int x, y, z;

    printf("Digite um valor:\n");
    scanf("%d", &x);
    printf("Digite outro valor:\n");
    scanf("%d", &y);

    z=soma(x,y);
    printf("%d", z);
}

int soma(int x, int y){
    int valores=0;
    for (int i = x+1; i < y; i++)
    {
        valores+=i;
    }
    return valores;
    
}