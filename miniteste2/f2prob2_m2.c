#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXP 1000
#define TSIZE 10
#define NSIZE 50
#define TOP 10

typedef struct{
    char nome[NSIZE];
    char nomeEquipa[TSIZE];
    int jogos;
    float min, pts;
} jogador;

float mvp(jogador statsJogadores[], int n, jogador *mvPlayer)
{
    float max = statsJogadores[0].pts;
    int maxPos=0;

    for(int i=1; i<n; i++)
    {
        if(statsJogadores[i].pts > max)
        {
            max = statsJogadores[i].pts;
            maxPos = i;
        }
    }
    *mvPlayer = statsJogadores[maxPos];
    return statsJogadores[maxPos].pts;
}

int gravaEstatisticas(jogador statsJogadores[], int n, char *equipa, char *nomeFicheiro)
{
    FILE *fout;
    int i, cont;

  fout = fopen(nomeFicheiro, "w");
  if(fout == NULL) return -1;

    	for(i=0; i<n; i++)
        {
            if(strcmp(statsJogadores[i].nomeEquipa, equipa) == 0)
            {
                fprintf(fout, "%s %s %d %.1f %.1f\n", statsJogadores[i].nome, 
                statsJogadores[i].nomeEquipa, statsJogadores[i].jogos, 
                statsJogadores[i].min, statsJogadores[i].pts);
                cont++;
            }
        }
    fclose(fout);
    return cont;
}

void top10Jogadores(jogador statsJogadores[], int n, jogador topJogadores[])
{
    float max=0;
    jogador aux;
    int pos, maxPos;
    pos=0;

    while(pos<10)
    {
        maxPos=pos;
        for(int i; i<n; i++)
        {
            if(statsJogadores[i].pts > max)
            {
                max=statsJogadores[i].pts;
                maxPos = i;
            }
        }
        if(maxPos != pos)
        {
            aux = statsJogadores[pos];
            statsJogadores[pos] = statsJogadores[maxPos];
            statsJogadores[maxPos] = aux; 
        }
    pos++;
    }
    for(int i=0; i<10; i++)
    {
        topJogadores[i] = statsJogadores[i];
    }
}

/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int lerJogadores(char *filename, jogador statsJogadores[]);

void listarJogadores(jogador statsJogadores[], int n);

void imprimirJogador(jogador pl);

int main(){
    jogador statsJogadores[MAXP], topJogadores[10], mvPlayer;
	int njogadores;
    float pontos;

	njogadores = lerJogadores("nbaStats.txt", statsJogadores);
	printf("\n*** Jogadores (%d) ***\n", njogadores);
	listarJogadores(statsJogadores, njogadores);
	printf("\n");

    pontos = mvp(statsJogadores, njogadores, &mvPlayer);
	printf("\n*** Most Valuable Player (media de pontos %.1f) ***\n\n", pontos);
    if(pontos)
        imprimirJogador(mvPlayer);
	printf("\n");

    printf("\n*** A gravar jogadores da equipa %s para o ficheiro statsJogadores.txt ***\n", "GSW");
    printf("\nInformacao de %d jogadores gravada com sucesso\n", gravaEstatisticas(statsJogadores, njogadores, "GSW", "statsJogadores.txt"));
	printf("\n");

	top10Jogadores(statsJogadores, njogadores, topJogadores);
	printf("\n*** Top 10 jogadores (media de pontos) ***\n\n");
    listarJogadores(topJogadores, 10);
	printf("\n");

	return 0;
}

int lerJogadores(char *filename, jogador statsJogadores[]){
	FILE * f;
	int njogadores = 0;
    char name[NSIZE];

    f = fopen(filename, "r");
    if(f == NULL)
		return 0;

	while((njogadores < MAXP) && (fscanf(f, "%s %s %s %d %f %f", 
        statsJogadores[njogadores].nome, name, statsJogadores[njogadores].nomeEquipa,
        &(statsJogadores[njogadores].jogos), &(statsJogadores[njogadores].min),
        &(statsJogadores[njogadores].pts)) != EOF)){

        strcat(statsJogadores[njogadores].nome, " ");
        strcat(statsJogadores[njogadores].nome, name);
        njogadores++;
    }

    fclose(f);

    return njogadores;
}

void listarJogadores(jogador statsJogadores[], int n){
    int i, j;
    
    for(i=0; i<3 && i<n; i++){
        imprimirJogador(statsJogadores[i]);
    }
    if(n > 3)
    {
        if(n > 6)
            puts("...");
        j = i;
        if(n-3 > j)
            j = n-3;
        for (i=j; i<n; i++){
            imprimirJogador(statsJogadores[i]);
        }
    }
}

void imprimirJogador(jogador pl){
    printf("%s\t%s %2d ", pl.nome, pl.nomeEquipa, pl.jogos);
    printf("%2.1f %2.1f \n", pl.min, pl.pts);
}