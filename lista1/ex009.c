#include <stdio.h>

double calcularVolume(double comprimento, double altura, double largura);
int main(){

    double comprimento;
    scanf("%lf", &comprimento);

    double altura;
    scanf("%lf", &altura);

    double largura;
    scanf("%lf", &largura);

    double volume = calcularVolume(comprimento,altura,largura);
    printf("Volume: \t%.2lf cm³\n ", volume);
    

    return 0;
}

double calcularVolume(double comprimento, double altura, double largura){
    return altura * largura * comprimento;
}