#include <stdio.h>

double calcularPeso(char genero, double altura);

int main(){

    char genero;
    scanf("%c", &genero);

    double altura;
    scanf("%lf", &altura);

    double peso = calcularPeso(genero, altura);
    printf("Peso: \t%.2lf\n", peso);
    

    return 0;
}

double calcularPeso(char genero, double altura){

    double peso;
    if (genero == 'M')
    {
        peso = (72.7 * altura) - 58;
    }
    
    if (genero == 'F')
    {
        peso = (62.1 * altura) - 44.7;
    }
    
    return peso;
}