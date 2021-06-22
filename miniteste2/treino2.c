#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXFILMES 4000
#define TSIZE 150
#define CSIZE 30
#define MAXPAISES 20
#define DECADA_PESQUISA 1970
#define PAIS_PESQUISA "Poland"

typedef struct{
    unsigned int id;
    char titulo[TSIZE];
    char origem[MAXPAISES][CSIZE];
    unsigned int ano, duracao;
} filme;

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

int maisLongo(filme catalogo[], int n){
    /* problema 2.1 */
    int i, imax = 0, max;
    max = catalogo[0].duracao;
    for(i=1; i<n; i++)
    {
        if(catalogo[i].duracao > max)
        {
            max = catalogo[i].duracao;
            imax = i;
        }
    }
    return imax;
}

int gravaDecada(filme catalogo[], int n, char *nomeFicheiro, int decada){
    /* problema 2.2 */
    int year, i, count, totalcount=0;
    
    FILE *fout;
    fout = fopen(nomeFicheiro, "w");
    if(fout == NULL) return -1;
    for(year = 0; year < 10; year++){
        count=0;
        for(i=0; i<n; i++)
        {
            if(catalogo[i].ano == decada+year)
            {
                count++;
                totalcount++;
            }
        }
        fprintf(nomeFicheiro, "%d  -  %d\n", count, countTotal);
    }
    fclose(fout);
return totalcount;
}


int pesquisaPorPais(filme catalogo[], int n, char *pais, filme resultado[]){
    int i, j, cont=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<MAXPAISES; j++)
        {
            if(strcmp(catalogo[i].origem[i][j], pais) == 0)
            {
                resultado[cont++] = catalogo[i];
            }
        }
    }
    int imax, pos=0;
    catalogo aux;
    while(pos < cont - 1)
    {
        imax = pos;
        i = pos +1;
        while(i < cont)
        {
            if(resultado[i] > resultado[imax])
            {
                imax = i;
            }
            i++;
        }
        if(imax != cont)
        {
        aux = resultado[pos];
        resultado[pos] = resultado[imax];
        resultado[imax] = aux;
        }
        pos++;
    }
/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/ 

int ler(char *filename, filme catalogo[]);

void listar(filme catalogo[], int n);

void imprimir(filme f);

int main(){
    filme catalogo[MAXFILMES] = {0}, resultado[MAXFILMES];
	int nfilmes, nres, duracao;
    int posMax;

	nfilmes = ler("catalogo.txt", catalogo);
	/*printf("\n*** Filmes (%d) ***\n", nfilmes);
	listar(catalogo, nfilmes);
	printf("\n");*/

    posMax = maisLongo(catalogo, nfilmes);
    if(posMax != -1)
    {    
        printf("\n*** Filme mais longo (duracao %d minutos) ***\n\n", catalogo[posMax].duracao);
        imprimir(catalogo[posMax]);
    }
    else
    	printf("\n*** Filme mais longo (duracao -- minutos) ***\n\n---");    
	printf("\n");

    printf("\n*** A gravar estatisticas por ano para ficheiro stats.txt ***\n");
    printf("\nInformacao da decada %d gravada com sucesso (total = %d filmes)\n", DECADA_PESQUISA, gravaDecada(catalogo, nfilmes, "stats.txt", DECADA_PESQUISA));
	printf("\n");

	nres = pesquisaPorPais(catalogo, nfilmes, PAIS_PESQUISA, resultado);
	printf("\n*** Filmes com origem %s (%d) ***\n\n", PAIS_PESQUISA, nres);
    listar(resultado, nres);
	printf("\n");

	return 0;
}

int ler(char *filename, filme catalogo[]){
	FILE * f;
	int n = 0;
    char linha[1000];
    char paises[MAXPAISES*Ctam];

    f = fopen(filename, "r");
    if(f == NULL)
		return 0;

	while((n < MAXFILMES) && fgets(linha, 1000, f) != NULL){
        linha[strlen(linha)-1]='\0';
        catalogo[n].id = atoi(strtok(linha, "\t"));
        strcpy(catalogo[n].titulo, strtok(NULL, "\t"));
        strcpy(paises, strtok(NULL, "\t"));
        catalogo[n].ano = atoi(strtok(NULL, "\t"));
        catalogo[n].duracao = atoi(strtok(NULL, "\t"));
        
        int npaises=0;
        char *pais;
        strcpy(catalogo[n].origem[0], strtok(paises, ","));
        while((pais = strtok(NULL, ",")) != NULL)
            strcpy(catalogo[n].origem[npaises++], pais+1);
        n++;
    }

    fclose(f);
    return n;
}

void listar(filme catalogo[], int n){
    int i, j;
    
    for(i=0; i<3 && i<n; i++){
        imprimir(catalogo[i]);
    }
    if(n > 3)
    {
        if(n > 6)
            puts("...");
        j = i;
        if(n-3 > j)
            j = n-3;
        for (i=j; i<n; i++){
            imprimir(catalogo[i]);
        }
    }
}

void imprimir(filme f){
    int i=1;
    printf("%d - %s ", f.id, f.titulo);
    printf("| %s", f.origem[0]);
    while(strlen(f.origem[i]) != 0)
    {
        printf(", %s", f.origem[i]);
        i++;
    }
    printf(" | %d | %d\n", f.ano, f.duracao);
}
}