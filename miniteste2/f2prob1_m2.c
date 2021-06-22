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
int lerEquipas(char nomes[][TSIZE], int totalPontos[])
{
    char aux[TSIZE];
    int pontos, teams=0, newSave=1;

    while(scanf("%*s %*s %s %d", aux, &pontos) == 2)
    {
        for(int i=0; i<teams; i++)
        {
            if(strcmp(nomes[i], aux) == 0)
            {
                totalPontos[i] += pontos;
                newSave=0;
            }
        }
        if(newSave)
        {
            strcpy(nomes[teams], aux);
            totalPontos[teams] = pontos;
            teams++;
        }
        newSave = 1;
    }
    return teams;
}
    


/* Determina qual a equipa com maior pontuação.
 * Retorna a posição dessa equipa no vetor.
 * */
int melhorPontuacao(int pontos[], int n){
    int i, maxpts, posmax;
    maxpts = pontos[0];
    for(i=1; i<n; i++)
    {
        if(pontos[i] > maxpts)
        {
            maxpts = pontos[i];
            posmax = i;
        }
    }
    return posmax;
}

/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int main()
{
    int nequipas, mequipa;
    char equipas[MAXT][TSIZE]={0};
    int pontosEquipas[MAXT]={0};

    nequipas = lerEquipas(equipas, pontosEquipas);
    printf("Total de equipas: %d\n", nequipas);

    mequipa = melhorPontuacao(pontosEquipas, nequipas);
    printf("Equipa com maior pontuacao: %s (%d pontos)\n", equipas[mequipa], pontosEquipas[mequipa]);

	return 0;
}
/*int n=0, nequipas=0, npilotos=0, i=0;
    char piloto[NSIZE][NSIZE], sobrenome[NSIZE][NSIZE];


    while(scanf("%s", piloto[n]) != EOF  && nequipas <10)
    {
        scanf("%s", sobrenome[n]);
        strcat(piloto[n], " ");
        strcat(piloto[n], sobrenome[n]);   //era escusado
        n++;
        scanf("%s", nomes[nequipas]);
        scanf("%d", &totalPontos[nequipas]);
        for(i=nequipas; i<n; i++){
        if(strcmp(nomes[nequipas], nomes[i]) ==0)
        {
            totalPontos[nequipas] += totalPontos[i];
            nomes[i][0] = '\0';
            nequipas++;  
        }
    }
    }
    return nequipas;*/