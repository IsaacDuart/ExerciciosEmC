#include <stdio.h>


int main(){

    int inicial;
    scanf("%d", &inicial);

    int final;
    scanf("%d", &final);

    int soma = 0;

    for (size_t i = inicial; i < final + 1; i++)
    {
        soma += i;
    }
    
    int faixa = final - inicial + 1;
    double media = (double) soma/faixa;

    printf("%.2lf", media);

    return 0;
}