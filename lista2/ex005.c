#include <stdio.h>

int main(){

    int n;
    int maior = -1;
    int menor = __INT32_MAX__;

    while (n != 0)
    {
        scanf("%d", &n);

        if (n < menor && n!=0)
        {
            menor = n;
        } 
        if (n > maior)
        {
            maior = n;
        }
        
        
    }
    
    printf("Maior: %d\nMenor: %d\n", maior, menor);


    return 0;
}