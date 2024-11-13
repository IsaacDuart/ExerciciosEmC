#include <stdio.h>

int main(){

    int valor;
    scanf("%d", &valor);

    printf("Antecessor: \t%d\nValor: \t\t%d\nSucessor: \t%d\n", valor -1, valor, valor+1);
    

    return 0;
}