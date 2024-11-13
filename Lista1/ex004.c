#include <stdio.h>

int main(){

    double valorDaConta;
    scanf("%lf", &valorDaConta);
    
    double valorFinal = 1.1 * valorDaConta;

    printf("Valor da conta + Gorjeta: \t%.2lf\n", valorFinal);

    return 0;
}