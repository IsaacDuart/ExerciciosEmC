#include <stdio.h>

int main() {
    long long soma = 0;
    long long graos = 1;

    for (int i = 1; i <= 64; i++) {
        soma += graos;
        graos *= 2;
    }

    printf("%lld\n", soma);

    return 0;
}
