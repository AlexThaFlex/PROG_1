#include <stdio.h>

int pos(int x, int y, int tamanho)
{
    return x + y * tamanho;
}

void leMatriz(int matriz[], int N)
{
    printf("Dados: ");
    for(int i = 0; i < N * N; i++) // 2 dim.
    {
        scanf("%d", &matriz[i]);
    }
}

void imprimeMatriz(int matriz[], int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d\t", matriz[pos(i, j, N)]);
        }
        printf("\n");
    }
}

void produtoEscalar(int matriz[], int N, int escalar)
{
    for (int i = 0; i < N * N; i++)
    {
        matriz[i] *= escalar;
    }
}

void multMatrizes(int matriz[], int mult[], int resultado[], int N)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            resultado[pos(i, j, N)] = matriz[pos(i, j, N)] * mult[j];
        }
    }
}

int main()
{
    int matriz[100]; //quadrada
    int mult[10]; // max 10 colunas, multp. por 10 linhas
    int res[100];
    int n;

    do
    {
        printf("Tamanho: "); scanf("%d", &n);
    } while(n > 10 || n < 1);

    leMatriz(matriz, n); // se for 9, tem dimensão 18

    printf("Matriz original:\n");
    imprimeMatriz(matriz, n);

    printf("Matriz x2:\n");
    produtoEscalar(matriz, n, 2);
    imprimeMatriz(matriz, n);

    printf("Matriz a multiplicar (%dx1): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mult[i]);
    }
    multMatrizes(matriz, mult, res, n);
    imprimeMatriz(res, n);


}