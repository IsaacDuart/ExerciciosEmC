#include <stdio.h>


#define INICIAL 1
#define FINAL 256

void decimalParaBinario(int num);
int main(){


    for (size_t i = INICIAL; i < FINAL + 1; i++)
    {
        printf("%d em octal: \t\t%o\n", i, i);
        printf("%d em hexadecimal: \t0x%X\n", i, i);
        decimalParaBinario(i);
    }
    
    



    return 0;
}

void decimalParaBinario(int num) {
    int i;

    int bin[32];

  
    for (i = 0; i < 32; i++) {
        bin[i] = num % 2;
        num = num / 2;
    }

    int started = 0;
    for (i = 31; i >= 0; i--) {
        if (bin[i] == 1 || started) {
            printf("%d", bin[i]);
            started = 1;
        }
    }

    if (!started) {
        printf("0"); 
    }

}