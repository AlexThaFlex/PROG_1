
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "artigos.h"

#define ARMAZEM_SIZE 500

void menu(int *op)
{
    system("clear");
    printf("1 - Ler artigos\n\
2 - Total artigos\n\
3 - Alertas artigos\n\
4 - Ordenar armazem\n\
5 - Imprimir armazem\n\
6 - Sair\n\n\
Opção: ");
    scanf("%d", op);
    getchar();
}

int lerArmazem(artigo armazem[], char *nomeFicheiro)
{
    int size;
    do
    {
        printf("Tamanho (<%d): ", ARMAZEM_SIZE); scanf("%d", &size);
    } while(size > ARMAZEM_SIZE || size <= 0);

    getchar();
    
    for(int i = 0; i < size; i++)
    {
        printf("\nArtigo #%d\n", i + 1);
        leArtigos(&armazem[i], nomeFicheiro);
    }
    return size;
}

void imprimirArmazem(artigo armazem[], int n)
{
    printf("Designacao\t\tModelo\t\t\tMarca\t\t\tdisp\tPreco\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\t\t\t%s\t\t\t%s\t\t\t%d\t%.2f\n", armazem[i].designacao, armazem[i].modelo, armazem[i].marca, armazem[i].disp, armazem[i].preco);
    }
}

void pesq(artigo armazem[], int n)
{
    char marca[MAX_STRING], modelo[MAX_STRING];
    printf("Marca: ");
    fgets(marca, MAX_STRING, stdin);
    marca[strlen(marca) - 1] = '\0';

    printf("Modelo: ");
    fgets(modelo, MAX_STRING, stdin);
    modelo[strlen(modelo) - 1] = '\0';

    printf("Quantidade: %d\n", totalArtigos(armazem, n, marca, modelo));
}

int main()
{
    char nomeFicheiro[100];
    printf("Ficheiro?");
    scanf("%s", nomeFicheiro);
    int op = 6;
    artigo armazem[ARMAZEM_SIZE];
    int n = -1;
    do 
    {
        menu(&op);
        if(n == -1 && op > 1 && op < 6) continue;
        switch(op)
        {
            case 1:
                n = lerArmazem(armazem, nomeFicheiro);
                break;
            case 2:
                pesq(armazem, n);
                getchar();
                break;
            case 3:
                alertaArtigos(armazem, n);
                getchar();
                break;
            case 4:
                ordenaArtigos(armazem, n);
                break;
            case 5:
                imprimirArmazem(armazem, n);
                getchar();
                break;
        }
    } while(op != 6);
}