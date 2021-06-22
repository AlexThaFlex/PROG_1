#include <stdio.h>

#define TAM_MAX 20

/********************************************/
/*       ALTERAR APENAS ESTA FUNCAO         */

int compacta(int entrada[], int n, int saida[])
{
    if(!(0 < n <= TAM_MAX)) return 0;
    int i, tam=1, pos=0;
    saida[0] = entrada[0]
    for(i=1; i<n; i++)
    {
        if(entrada[pos] != entrada[i])
        {
            saida[tam++] = entrada[i];
        }
    pos++;
    }
    return tam;
}

/********************************************/

void imprime_vetor(int v[], int n);

int main()
{
    int v1[TAM_MAX] = { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1};
    int v2[TAM_MAX] = { 1, 0, 0, 0, 0, 1, 0, 1, 1, 0};
    int res[TAM_MAX], tam;

    tam = compacta(v1, 5, res);
    printf("Teste 1: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, 0, res);
    printf("Teste 2: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, 20, res);
    printf("Teste 3: ");
    imprime_vetor(res, tam);

    printf("Teste 4: %d\n", tam);

    tam = compacta(v1, 30, res);
    printf("Teste 5: ");
    imprime_vetor(res, tam);

    printf("Teste 6: %d\n", tam);

    tam = compacta(v2, 7, res);
    printf("Teste 7: ");
    imprime_vetor(res, tam);
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}