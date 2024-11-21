

#ifndef ARMARIOS_H  
#define ARMARIOS_H

#include <stdbool.h>  


unsigned char ocuparArmario(unsigned char pos, unsigned char armarios);
unsigned char liberarArmario(unsigned char pos, unsigned char armarios);
bool estaDisponivel(unsigned char pos, unsigned char armarios);

#endif 
