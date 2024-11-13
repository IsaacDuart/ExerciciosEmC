#include <stdio.h>

void imprimirBinario(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    unsigned char X, Y;

    printf("Digite o valor de X (0 a 255): ");
    scanf("%hhu", &X);
    printf("Digite o valor de Y (5 a 255): ");
    scanf("%hhu", &Y);

    if (Y < 5) {
        printf("O valor de Y deve ser maior ou igual a 5.\n");
        return 1;
    }

    unsigned char mask = 0x0F;

    Y &= ~mask;
    Y |= (X & mask);

    printf("X (em binário): ");
    imprimirBinario(X);
    printf("\n");

    printf("Y (modificado, em binário): ");
    imprimirBinario(Y);
    printf("\n");

    return 0;
}
