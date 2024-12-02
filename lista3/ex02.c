#include <stdio.h>
#include <stdbool.h>

#define TAM 20

bool estaPresente(char caracter, char texto[TAM]);
int main(){


    char texto[TAM];
    fgets(texto, TAM, stdin);

    char caracter;
    scanf("%c", &caracter);

    printf("Esta presente? %d\n", estaPresente(caracter, texto));

    return 0;
}

bool estaPresente(char caracter, char texto[TAM]){

    for (int i = 0; i < TAM; i++)
    {
        if (caracter == texto[i])
        {
            return true;
        }
    }
    return false;
}