#include <stdio.h>

#define INICIAL 1
#define FINAL 10

int fatorial(int numero);
int main(){


    for (size_t i = INICIAL; i < FINAL + 1; i++)
    {
        if(i % 2) printf("%d", fatorial(i));
    }

    return 0;
}

int fatorial(int numero){

    int produtorio = 1;
    for (size_t i = numero; i >= 1; i--)
    {
        produtorio *= i;
    }
    

    return produtorio;
}