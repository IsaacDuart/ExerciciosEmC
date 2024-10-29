#include <stdio.h>


int modulo(int valor);
int main(){

    int valor;
    scanf("%d", &valor);


    int moduloDoNumero = modulo(valor);
    printf("Modulo: \t%d\n", moduloDoNumero);



    return 0;
}

int modulo(int valor){
  return (valor < 0) ? -valor : valor;
}