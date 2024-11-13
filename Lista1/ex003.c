#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);

    printf("-------------------\n");
    printf("Triplo: \t%d\nQuadrado: \t%d\nMetade: \t%d\n", (3 * numero), numero * numero, numero/2);
    

    return 0;
}