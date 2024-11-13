#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);

    numero % 2 ? printf("impar") : printf("par");
    return 0;
}