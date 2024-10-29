#include <stdio.h>

int calcularSegundos(int segundos, int minutos, int horas);
int main(){

    int segundos;
    scanf("%d", &segundos);

    int minutos;
    scanf("%d", &minutos);

    int horas;
    scanf("%d", &horas);

    int resultado = calcularSegundos(segundos,minutos,horas);
    printf("Resultado em Segundos: \t%d", resultado);
    

    return 0;
}

int calcularSegundos(int segundos, int minutos, int horas){
    return (3600 * horas) + (60 * minutos) + (segundos);
}