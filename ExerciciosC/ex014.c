#include <stdio.h>

double calcularSalario(int diasTrabalhados);
int main(){
    int diasTrabalhados;
    scanf("%d", &diasTrabalhados);

    double salario = calcularSalario(diasTrabalhados);

    if (diasTrabalhados < 0) {
        printf("Número de dias trabalhados não pode ser negativo.\n");
        return 1;
    }

    printf("Salario Final: \t%.2lf\n", salario);

    return 0;
}
double calcularSalario(int diasTrabalhados){
    double salarioFinal;

    if (diasTrabalhados <= 10)
    {
       salarioFinal = 0.9 /*imposto*/ * (50.25 * diasTrabalhados);
    } 

    else if (diasTrabalhados > 10 && diasTrabalhados <= 20)
    {
       salarioFinal = 1.2 * 0.9 * (50.25 * diasTrabalhados);

    } 

    else if (diasTrabalhados > 20)
    {
       salarioFinal = 1.3 * 0.9 * (50.25 * diasTrabalhados);
       
    }
        

    return salarioFinal;
}