#include <stdio.h>


int main(){

    int valor;
    scanf("%d", &valor);

    for (size_t i = 1; i < 11; i++)
    {
       printf("%d x %d: %d\n", valor, i,  i * valor);
    }
    
    return 0;
}