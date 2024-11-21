#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "gerenciador.h"

void exibirMenu();
void exibirStatus(unsigned char armarios);
void imprimirBinario(unsigned char numero); 


int main(){

    unsigned char armarios = 0x00;
    unsigned char pos;
    unsigned char resposta;


    srand(time(NULL));
    do
    {
        exibirMenu();
        exibirStatus(armarios);

        scanf("%hhu", &resposta);
        switch (resposta)
        {
        case 1: 
        
            puts("[Ocupando armario...]");
            pos = rand() % 8 + 1;

            armarios = ocuparArmario(pos, armarios);

            break;
        
        case 2: 

            puts("[Selecione uma posicao para liberar]");
            scanf("%hhu", &pos);

            armarios = liberarArmario(pos, armarios);

            break;

        case 3: exit(0); 
            break;
        
        default:
            break;
        }


    } while (resposta != 3);
    

    return 0;
}

void exibirMenu(){


        puts("|===========///===========|");
        puts("|-------------------------|");
        puts("|    Escolha uma opcao    |");
        puts("|-------------------------|");

        puts("|                         |");
        puts("|[1] - Ocupar Armario     |");
        puts("|[2] - Liberar Armario    |");
        puts("|[3] - Sair               |");
        puts("|===========///===========|\n");
}

void exibirStatus(unsigned char armarios){
    puts("|======== Status =========|");

    puts("| [1] - Ocupado           |");
    puts("| [0] - Livre             |");
    puts("|-------------------------|");
    puts("| 8 7 6 5 4 3 2 1         |");

    printf("|");
    imprimirBinario(armarios);
    printf("         |\n");
    puts("|=========================|\n");
}

void imprimirBinario(unsigned char numero) {
    
    for (int i = 7; i >= 0; i--) {
        unsigned char mask = 1 << i; 
        if (numero & mask) {
            printf(" 1");  
        } else {
            printf(" 0"); 
        }
    } 
}
