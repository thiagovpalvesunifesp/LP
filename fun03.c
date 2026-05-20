#include<stdio.h>

int ehoque(int);

int main(){
    int n, verificar;

    printf("Digite um valor:\n");
    scanf("%d", &n);

    verificar = ehoque(n);
    printf("%d", verificar);
}

int ehoque(int n){
    if(n<0){
        return -1;
    }
    else if (n>0){
        return 1;
    }
    else{
        return 0;
    }
}