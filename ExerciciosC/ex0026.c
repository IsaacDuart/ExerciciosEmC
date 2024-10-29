#include <stdio.h>
#include <math.h>

int main() {
    
    float num1;
    scanf("%f", &num1);
    float num2;
    scanf("%f", &num2);
    float num3;
    scanf("%f", &num3);

    float mediaAritmetica = (num1 + num2 + num3) / 3;

    float mediaGeometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    printf("Média Aritmética: %.2f\n", mediaAritmetica);
    printf("Média Geométrica: %.2f\n", mediaGeometrica);

    return 0;
}
