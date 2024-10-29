#include <stdio.h>

int main(){

    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);

    n1 % n2 ? printf("Nao eh multiplo") : printf("Eh multiplo");



    return 0;
}