#include <stdio.h>

int calcularFatorial(int n);
int main(){

    int n;
    scanf("%d", &n);

    int resposta = calcularFatorial(n);
    printf("%d\n", resposta);
    
    return 0;
}

int calcularFatorial(int n){
    int fatorial = n;

    for (size_t i = fatorial; i > 1; i--)
    {
       fatorial *= i - 1;
    }
    return fatorial;
}