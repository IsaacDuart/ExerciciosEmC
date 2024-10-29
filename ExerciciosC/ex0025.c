#include <stdio.h>
#include <math.h>

double calcularDistancia(int ponto1[2], int ponto2[2]);
int main(){

    int ponto1[2];
    int ponto2[2];

    printf("Digite as coordenadas do ponto 1 (x1 y1): ");
    for (size_t i = 0; i < 2; i++) {
        scanf("%d", &ponto1[i]);
    }

    printf("Digite as coordenadas do ponto 2 (x2 y2): ");
    for (size_t i = 0; i < 2; i++) {
        scanf("%d", &ponto2[i]);
    }

    double distancia = calcularDistancia(ponto1, ponto2);
    printf("Distancia: %.2lf", distancia);

    return 0;
}

double calcularDistancia(int ponto1[2], int ponto2[2]){

    int difx = ponto1[0] - ponto2[0];
    int dify = ponto1[1] - ponto2[1];

    double distancia = sqrt(pow(difx, 2) + pow(dify, 2));

    return distancia;
}