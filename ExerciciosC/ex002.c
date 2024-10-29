#include <stdio.h>

int main(){

    double numero;
    scanf("%lf", &numero);

    printf("-------------------\n");
    printf("formatado : %.1lf\n", numero, numero);
    

    return 0;
}