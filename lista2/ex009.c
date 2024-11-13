#include <stdio.h>


int fib(int numero);
int main(){



    int fibo = fib(20);

    printf("%d", fibo);



    return 0;
}

int fib(int numero){

    if (numero == 0) return 0;
    if (numero == 1) return 1;

    int anterior = 0;
    int atual = 1;
    int proximo;

    for (int i = 2; i <= numero; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;

}