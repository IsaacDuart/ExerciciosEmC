#include <stdio.h>

#define INICIAL 10
#define FINAL 100
int main(){

    double fahrenheit;
    for (size_t celsius = INICIAL; celsius < FINAL + 1; celsius += 10)
    {
        fahrenheit = 1.8 * celsius + 32;
        printf("%.2lf", fahrenheit);
    }
    
    return 0;
}