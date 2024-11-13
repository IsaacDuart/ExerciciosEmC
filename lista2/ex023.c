#include <stdio.h>

int main() {
    int i = 5;
    int resultado;

    
    resultado = ++i - 3;
    printf("Resultado do pre-incremento (++i - 3): %d\n", resultado);
    printf("Valor de i apos pre-incremento: %d\n\n", i);

    i = 5;


    resultado = i++ - 3; 
    printf("Resultado do pos-incremento (i++ - 3): %d\n", resultado);
    printf("Valor de i após pos-incremento: %d\n", i);

    return 0;
}
