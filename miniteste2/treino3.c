#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXT 10
#define TSIZE 12
#define NSIZE 50

/* Guarda nomes das equipas no vetor de strings names e o total de 
 * pontos conquistados de cada equipa na mesma posição no vetor 
 * totalPontos. Retorna o número de equipas lidas, sem repetições.
 * Nota: os nomes dos jogadores são lidos, mas não são guardados. 
 * */
int lerEquipas(char nomes[][TSIZE], int totalPontos[]){
    char n1[NSIZE], n2[NSIZE], aux[NSIZE];
    int i, nteams=0, pts, newSave = 1;
    
    while(nteams < MAXT  &&  scanf("%s %s %s %d", n1, n2, aux, &pts) == 4)
    {
        for(int i=0; i<nteams; i++)
        {
            if(strstr(nomes[i], aux) != NULL)
            {
                totalPontos[i] += pts;
                newSave=0;
            }
        }
        if(newSave)
        {
            strcpy(nomes[nteams], aux);
            totalPontos[nteams] = pts;
            nteams++;
        }
        newSave = 1;
    }
    return nteams;
}
    

/* Determina qual a equipa com maior pontuação.
 * Retorna a posição dessa equipa no vetor.
 * */
int melhorPontuacao(int pontos[], int n)
{
    int i, imax=0, max;
    max = pontos[0];
    for(int i=1; i<n; i++)
    {
        if(pontos[i] > max)
        {
            max = pontos[i];
            imax = i;
        }
    }
    return imax;
}
/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int main()
{
    int nteams, mequipa;
    char equipas[MAXT][TSIZE]={0};
    int pontosEquipas[MAXT]={0};

    nteams = lerEquipas(equipas, pontosEquipas);
    printf("Total de equipas: %d\n", nteams);

    mequipa = melhorPontuacao(pontosEquipas, nteams);
    printf("Equipa com maior pontuacao: %s (%d pontos)\n", equipas[mequipa], pontosEquipas[mequipa]);

	return 0;
}
