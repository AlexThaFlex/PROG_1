/*
    Implemente a função copia_pares com as seguintes características:
        - copia todos os valores pares contidos no vetor de entrada 
          para o vetor de saída.
        - tamanho do vetor de entrada é indicado no parâmetro n
        - o retorno da função deverá ser o tamanho do vetor de saída
        - a função deve verificar se o tamanho do vetor de entrada está
          dentro dos limites (0 < n <= TAM_MAX); caso não esteja deve retornar 0
        - os valores 0 não devem ser considerados pares

    Resultado esperado:
        Teste 1: { 4 6 10 }
        Teste 2: { }
        Teste 3: { 4 6 }
        Teste 4: 2
        Teste 5: { }
        Teste 6: 0
        Teste 7: { }
*/

#include <stdio.h>

#define TAM_MAX 10

/********************************************/
/*       ALTERAR APENAS ESTA FUNCAO         */

int copia_pares(int entrada[], int n, int saida[])
{
    if(!(0 < n <= TAM_MAX)) return 0;
    int i, tam=0;
    for(i=0; i<n; i++)
    {
        if( entrada[i] % 2 == 0 && entrada[i] != 0)
        {
            saida[tam++]= entrada[i];
        }
    }
    tam++
}


/********************************************/

void imprime_vetor(int v[], int n);

int main()
{
    int v1[TAM_MAX] = { 4, 5, 6, 7, 10 };
    int v2[TAM_MAX] = { 1, 1, 1 };
    int res[TAM_MAX], tam;

    tam = copia_pares(v1, 5, res);
    printf("Teste 1: ");
    imprime_vetor(res, tam);

    tam = copia_pares(v1, 0, res);
    printf("Teste 2: ");
    imprime_vetor(res, tam);

    tam = copia_pares(v1, 3, res);
    printf("Teste 3: ");
    imprime_vetor(res, tam);

    printf("Teste 4: %d\n", tam);

    tam = copia_pares(v1, 20, res);
    printf("Teste 5: ");
    imprime_vetor(res, tam);

    printf("Teste 6: %d\n", tam);

    tam = copia_pares(v2, 5, res);
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