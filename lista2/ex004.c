#include <stdio.h>

int main(){

    int alturaJose = 150;
    int alturaPedro = 110;


    int anos = 0;
    while (alturaPedro <= alturaJose)
    {
        alturaJose += 2;
        alturaPedro += 3;
        anos++;
    }

    printf("Pedro passou jose em altura em %d anos\n", anos);
    return 0;
    
}