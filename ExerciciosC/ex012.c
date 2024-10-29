#include <stdio.h>


int main(){

    int A;
    scanf("%d", &A);

    int B;
    scanf("%d", &B);


    int C = A;
    A = B;
    B = C;
    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n", B);

    return 0;
}