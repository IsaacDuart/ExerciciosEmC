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

    for (size_t i = inicial; i <  final + 1; i++)
        {
            if(i % 4 == 0) printf("%d", i * i);
        }
        
        return 0; 
    

    return 0;
}