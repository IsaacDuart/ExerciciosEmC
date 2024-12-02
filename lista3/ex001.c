#include <stdio.h>

#define TAM 15

void lerVetor(float vetor[TAM]);
float pegarMaior(float vetor[TAM]);
float pegarMenor(float vetor[TAM]);

int main(){


    float vetor[TAM];

    lerVetor(vetor);

    float maior = pegarMaior(vetor);
    float menor = pegarMenor(vetor);

    printf("Soma: %.2lf", maior + menor);
    return 0;
}

void lerVetor(float vetor[TAM]){

    for (int i = 0; i < TAM; i++)
    {
        scanf("%f", &vetor[i]);
    }
}

float pegarMaior(float vetor[TAM]){

    float maior = vetor[0];
    for (int i = 0; i < TAM; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

float pegarMenor(float vetor[TAM]){

    float menor = vetor[0];
    for (int i = 0; i < TAM; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    return menor;
}

