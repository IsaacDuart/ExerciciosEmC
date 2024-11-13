#include <stdio.h>

int main(){

    int total_segundos;
    scanf("%d", &total_segundos);

    int horas = total_segundos / 3600;         
    int minutos = (total_segundos % 3600) / 60; 
    int segundos = total_segundos % 60;

    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
    return 0;
}