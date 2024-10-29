#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    int n;
    scanf("%d", &n);

    int resultado = x << n;

    printf("Resultado: %d", resultado);
    
    return 0;
}