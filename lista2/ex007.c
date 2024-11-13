#include <stdio.h>

int main(){

    int v1;
    int v2;

    scanf("%d", &v1);
    do
    {
        scanf("%d", &v2);

    } while (v2 == 0);
    
    
    double divisao = (double) v1 / v2;
    printf("%.2lf", divisao);


    return 0;
}