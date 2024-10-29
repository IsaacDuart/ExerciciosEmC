#include <stdio.h>

int main(){

    double n1;
    scanf("%lf", &n1);

    double n2;
    scanf("%lf", &n2);

    double soma = n1 + n2;
    double subtracao = n1 - n2;
    double multiplicacao = n1 * n2;
    double divisao;
    divisao = (n2 != 0) ? (n1 / n2) : -1;
    


    printf("Soma: \t\t%.2lf\n", soma);
    printf("Subtracao: \t%.2lf\n", subtracao);
    printf("Multiplicacao: \t%.2lf\n", multiplicacao);
    printf("Divisao: \t%.2lf\n", divisao);

    

    return 0;
}