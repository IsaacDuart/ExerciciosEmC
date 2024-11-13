#include <stdio.h>


int main(){


    int inicial;
    scanf("%d", &inicial);

    int final;
    scanf("%d", &final);


    if (final < inicial)
    {
        int temp = inicial;
        inicial = final;
        final = temp;
    }
    


    int quantidade = 0;
    for (size_t i = inicial; i < final + 1; i++)
    {
        if(i % 3 == 0) quantidade++;
    }
    printf("%d", quantidade);

    return 0;
}