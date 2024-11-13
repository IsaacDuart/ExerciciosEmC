#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;

    printf("Digite o número de termos para calcular a aproximação de pi: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double termo = 4.0 / (2 * i + 1);
        if (i % 2 == 0) {
            pi += termo;
        } else {
            pi -= termo;
        }

        printf("Termos usados: %d, Aproximação de pi: %.15lf\n", i + 1, pi);
    }

    return 0;
}

