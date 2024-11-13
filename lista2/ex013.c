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
    


    int somaPares = 0;
    for (size_t i = inicial; i < final + 1; i++)
    {
        if(i % 2 == 0) somaPares += i;
    }
    printf("%d", somaPares);
    


    return 0;
}