#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TAM 15

bool saoIguais(char str1[TAM], char str2[TAM]);
int main(){


    char str1[TAM];
    fgets(str1, TAM, stdin);

    str1[strcspn(str1, "\n")] = '\0';

    char str2[TAM];
    fgets(str2, TAM, stdin);

    str2[strcspn(str2, "\n")] = '\0';


    printf("Sao iguais? func[1 = IGUAL] %d\n", saoIguais(str1,str2));
    printf("Sao iguais? strcmp[0 = IGUAL] %d\n", strcmp(str1, str2));

    return 0;
}

bool saoIguais(char str1[TAM], char str2[TAM]){

    for (int i = 0; i < TAM; i++)
    {
        if (str1[i] != str2[i]) return false;
        if (str1[i] == '\0' && str2[i] == '\0') break;
    }
    
    return true;
}