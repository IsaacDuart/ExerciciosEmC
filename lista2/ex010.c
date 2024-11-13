#include <stdio.h>

#define INICIAL 15
#define FINAL 90
int main(){

    for (size_t i = INICIAL; i <  FINAL + 1; i++)
    {
        if(i % 4 == 0) printf("%d", i * i);
    }
    
    return 0;
}