#include <stdio.h>
#include <math.h>

#define BASE 3
#define FINAL 7
int main(){

    for (size_t i = 0; i < FINAL + 1; i++)
    {
        printf("%d", pow(BASE,i));
    }
   
    return 0;
}