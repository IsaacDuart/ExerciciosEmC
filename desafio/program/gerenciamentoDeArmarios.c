#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool estaDisponivel(unsigned char pos, unsigned char armarios);

unsigned char ocuparArmario(unsigned char pos, unsigned char armarios){

    system("clear");
    
    unsigned char mask = 0x01;


    if (!estaDisponivel(pos, armarios))
    {
        puts("|--------- Mensagem ---------|");
        puts("[O armario ja esta ocupado]");
        puts("|----------------------------|\n");
        return armarios;
    }
    

    mask <<= (pos-1);
    armarios = armarios | mask;


    puts("|--------- Mensagem ---------|");
    puts("[Armario ocupado com sucesso!]");
    puts("|----------------------------|\n");
    return armarios;
}

unsigned char liberarArmario(unsigned char pos, unsigned char armarios){

    system("clear");
    unsigned char mask = 0x01;

    if (estaDisponivel(pos, armarios))
    {
        puts("|---------- Mensagem -----------|");
        puts("[O armario ainda nao foi ocupado]");
        puts("|-------------------------------|\n");
        return armarios; 
    }
    

    mask <<= (pos-1);
    armarios &= ~mask;

    puts("|--------- Mensagem ----------|");
    puts("[Armario liberado com sucesso!]");
    puts("|-----------------------------|\n");
    return armarios;
}


bool estaDisponivel(unsigned char pos, unsigned char armarios){
    
    unsigned char mask = 0x01;
    
    mask <<= (pos - 1); 
    return (armarios & mask) == 0;
    
}