#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);

    int invertido = 0;
    while (numero != 0) {
        int digito = numero % 10;  
        invertido = invertido * 10 + digito; 
        numero = numero / 10;  
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}