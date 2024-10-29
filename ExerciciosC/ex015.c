#include <stdio.h>


double calcularSalarioBruto(int numeroDeHoras, double valorDaHora);
double calcularSalarioLiquido(double salarioBruto);

int main(){

    int numeroDeHoras;
    scanf("%d", &numeroDeHoras);

    double valorDaHora;
    scanf("%lf", &valorDaHora);

    double salarioBruto = calcularSalarioBruto(numeroDeHoras, valorDaHora);
    double salarioLiquido = calcularSalarioLiquido(salarioBruto);

    printf("Salario Bruto: \t%.2lf\n", salarioBruto);
    printf("Salario Liquido: \t%.2lf\n", salarioLiquido);



    return 0;
}

double calcularSalarioBruto(int numeroDeHoras, double valorDaHora){

    return numeroDeHoras * valorDaHora;
}

double calcularSalarioLiquido(double salarioBruto){
   double taxaImpostoInss;

    if (salarioBruto <= 1412.00) {
        taxaImpostoInss = 0.075;  
    } else if (salarioBruto <= 2666.68) {
        taxaImpostoInss = 0.09;   
    } else if (salarioBruto <= 4000.03) {
        taxaImpostoInss = 0.12;  
    } else if (salarioBruto <= 7786.02) {
        taxaImpostoInss = 0.14;   


    double desconto = salarioBruto * taxaImpostoInss;
    return salarioBruto - desconto;
}