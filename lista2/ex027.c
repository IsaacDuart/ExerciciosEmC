#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um número inteiro (digite um número negativo e par para sair): ");
    scanf("%d", &num);

    if (num < 0 && num % 2 == 0) {
        printf("Nenhum número válido foi inserido.\n");
        return 0;
    }

    maior = num;
    menor = num;

    while (1) {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0) {
            break;
        }

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("Produto do maior pelo menor número: %d\n", maior * menor);

    return 0;
}
