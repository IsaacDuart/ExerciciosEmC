#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);

    printf("-------------------\n");
    printf("%d em octal: \t\t%o\n", numero, numero);
    printf("%d em hexadecimal: \t0x%X\n", numero,numero);

    return 0;
}