#include<stdio.h>

int converte(int, int, int);

int main(){
    int hrs, min, seg, total;

    printf("Digite as horas:\n");
    scanf("%d", &hrs);
    printf("Digite os minutos:\n");
    scanf("%d", &min);
    printf("Digite os segundos:\n");
    scanf("%d", &seg);

    total=converte(hrs, min, seg);
    printf("%d", total);
}

int converte(int hrs, int min, int seg){
    return (hrs*3600)+(min*60)+seg;
}