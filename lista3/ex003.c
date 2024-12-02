#include <stdio.h>

#define TAM 100
int main(){

    char texto[TAM];
    fgets(texto, TAM, stdin);

    int tamanho = 0;
    while (texto[tamanho] != '\0') {
        tamanho++;  
    }

    printf("Tamanho do array: %d\n", tamanho-1); //Tira o '\n' da contagem
    

    return 0;
}