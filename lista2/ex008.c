#include <stdio.h>


int main(){

    double valor;
    scanf("%lf", &valor);

    int prestacao = (int)valor/3;
    double  entrada = valor - (2 * prestacao);


    printf("Prestacoes: %.d\nEntrada: %.2lf\n", prestacao, entrada);

    return 0;
}
