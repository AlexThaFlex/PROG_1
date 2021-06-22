#include <stdio.h>

int procuraTodos(int *v, int N, int x, int posicoes[], int *nPosicoes);
void imprimir_vetor(int v[], int n);
int main()
{
    int v[] = {1, 2, 2, 3, 5, 2, 3, 10};

    int posicoes[8];
    int nPosicoes;

    if (procuraTodos(v, 8, 2, posicoes, &nPosicoes)) // se for 1;
    {
        printf("Elementos encontrados: %d\nPosições: ", nPosicoes);
        imprimir_vetor(posicoes, nPosicoes);
    }
    else
    {
        printf("Não foram encontrados elementos\n");
    }
}

int procuraTodos(int *v, int N, int x, int posicoes[], int *nPosicoes) //alt
{
    *nPosicoes = 0;

    for (int i = 0; i < N; i++)
    {
        if (v[i] == x)
        {
            posicoes[*nPosicoes] = i;
            (*nPosicoes)++;
        }
    }
    return *nPosicoes > 0;
}

void imprimir_vetor(int v[], int n)
{
    printf("{ ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("}\n");
}