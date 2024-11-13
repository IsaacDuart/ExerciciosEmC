#include <stdio.h>


int main(){


    int soma3 = 0;
    int soma5 = 0;
    for (size_t i = 0; i < 200; i++)
    {
        if(i >= 0 && i <= 100 && i % 3 == 0 ) soma3 += i;
        if(i > 100 &&  i <= 200 && i % 5 == 0 ) soma5 += i;
    }
    
    printf("Somatorio divisiveis por 3: %d\n", soma3);
    printf("Somatorio divisiveis por 5: %d\n", soma5);





    return 0;
}