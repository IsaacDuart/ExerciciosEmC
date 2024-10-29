#include <stdio.h>

#define PI 3.14159
int main(){

    float raio;
    scanf("%f", &raio);

    printf("Diametro: \t%f\n", 2 * raio);
    printf("Circunferencia: \t%f\n", 2 * PI * raio);
    printf("Area: \t%f\n", PI * raio * raio);

    return 0;
}
