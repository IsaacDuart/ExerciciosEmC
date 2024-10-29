#include <stdio.h>

int main(){

    double quantidadeEmReais;
    scanf("%lf", &quantidadeEmReais);

    double cotacaoDolar;
    scanf("%lf", &cotacaoDolar);

    printf("Valor em dóalres: $\t%.2lf\n", cotacaoDolar*quantidadeEmReais);
    

    return 0;
}