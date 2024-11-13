#include <stdio.h>


double exibirPorcentagem(int votos, int espacoAmostral);

int main(){

    int voto;


    int votosPaulo = 0;
    int votosRenata = 0;
    int votosBranco = 0;
    int votosNulo = 0;


    unsigned char resposta;
    while (1){
        scanf("%d", &voto);

        if (voto == -1) break;  

        printf("Tem certeza do voto? [s/n]\n");
        scanf(" %c", &resposta); 
        switch (voto)
        {
        case 0: 
            votosBranco++;
            break;
        case 5: 
            votosPaulo++;
            break;

        case 7: 
            votosRenata++;
            break;
        
        default: 
            votosNulo++;
            break;
        }

    }
    

    int espacoAmostral = votosPaulo + votosBranco + votosRenata + votosNulo;
    puts("Resultado das Eleicoes");

    double porcentagemBranco = exibirPorcentagem(votosBranco, espacoAmostral);
    double porcentagemPaulo = exibirPorcentagem(votosPaulo, espacoAmostral);
    double porcentagemRenata = exibirPorcentagem(votosRenata, espacoAmostral);
    double porcentagemNulo = exibirPorcentagem(votosNulo, espacoAmostral);

    printf("Branco: %lf\nNulo: %lf\nPaulo: %lf\nRenata: %lf\n ", porcentagemBranco, porcentagemNulo, porcentagemPaulo, porcentagemRenata);
    

    if (votosRenata > votosPaulo)
    {
        puts("Renata ganhou!");
    }
    else if (votosRenata < votosPaulo)
    {
        puts("Paulo Ganhou!");
    }
    else {

        puts("Empate");
    }
    

    return 0;
}


double exibirPorcentagem(int votos, int espacoAmostral){

    double porcentagem = (double) votos/espacoAmostral;
    return porcentagem * 100;
}