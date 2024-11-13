#include <stdio.h>

double calcularFahrenheit(double celsius);
int main(){

    double celsius;
    scanf("%lf", &celsius);
    
    double fahrenheit = calcularFahrenheit(celsius);
    printf("Temperatura em Fahrenheit: \t%.2lf\n", fahrenheit);

    return 0;
}

double calcularFahrenheit(double celsius){
    return (9.0 / 5.0) * celsius + 32.0;
}