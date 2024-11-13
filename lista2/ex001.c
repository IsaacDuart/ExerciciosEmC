#include <stdio.h>

void exibirDia(int n);
int main(){

    int n = -1;

    while(n != 0){
        scanf("%d", &n);
        exibirDia(n);
    }


    return 0;
}

void exibirDia(int n){

    
    switch (n)
    {
    case 1 : printf("Segunda\n"); break;
    case 2 : printf("Terça\n"); break;
    case 3 : printf("Quarta\n"); break;
    case 4 : printf("Quinta\n"); break;
    case 5 : printf("Sexta\n"); break;
    case 6 : printf("Sabado\n"); break;
    case 7 : printf("Domingo\n"); break;
    default:
        printf("Dia invalido\n");
    }



}