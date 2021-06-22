#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#define MAX 100


typedef struct{
    char designacao[MAX];
    char marca[MAX];
    char modelo[MAX];
    float preco;
    int disp;
} artigo;

int leArtigos(artigo armazem[], char *nomeFicheiro)
{
    int n;
    FILE *f;
    f = fopen(nomeFicheiro, "r");
    for(int i=0; i<100; i++)
    {
       
        while(fscanf(f, "%s", armazem[i].designacao) != EOF)
        {
           fscanf(f, "%s", armazem[i].marca);
           fscanf(f, "%s", armazem[i].modelo);
           fscanf(f, "%f", &armazem[i].preco);
           fscanf(f, "%d", &armazem[i].disp);
        } 
    n++;
    }
    return n;
}

    int totalArtigos(artigo armazem[], int n, char *marca, char *modelo)
    {
         for(int i = 0; i < n; i++)
        {
        if(strcmp(armazem[i].marca, marca) == 0 && strcmp(armazem[i].modelo, modelo) == 0)
            return armazem[i].disp;
        }
    return 0;
    }

    void alertaArtigos(artigo armazem[], int n)
    {
        for(int i = 0; i < n; i++)
        {
            if(armazem[i].disp < 10)
                printf("Alerta de stock: %s %s (marca %s), %d restantes\n", armazem[i].designacao, armazem[i].modelo, armazem[i].marca, armazem[i].disp);
        }
    }

    void ordenaArtigos(artigo armazem[], int n)
    {
        artigo temp;
        for(int i=0; i<n; i++)
        {
            artigo *min = &armazem[i];
            for(int j = i+1; j < n; j++)
            {
                if(armazem[j].disp < (*min).disp)
                    min = &armazem[j]; 
            }
            temp = *min;
            *min = armazem[i];   //reinicia, auxiliares
            armazem[i] = temp;
        }
    }



