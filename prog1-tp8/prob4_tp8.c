#include <stdio.h>

#define N_ALUNOS 4

void ler_notas(float notas[][2], int n)
{
    int n1, n2;
    for (int i = 0; i < n; i++)
    {
        printf("Dados do aluno %d: ", i + 1);
        scanf("%f %d %d", &notas[i][0], &n1, &n2);
        notas[i][1] = (float)(n1 + n2) / 2;
    }
}

void escrever_dados(float notas[][2], int n)
{
    printf("Número\tMedia\n");
    for (int i = 0; i < n; i++)
    {
        printf("%05d\t%.1f\n", (int)notas[i][0], notas[i][1]);
    }
}

void ordena(float notas[][2], int N)
{
    float temp[2];
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(notas[i][1] < notas[j][1])
            {
                temp[0] = notas[i][0];
                temp[1] = notas[i][1];
                notas[i][0] = notas[j][0];
                notas[i][1] = notas[j][1];
                notas[j][0] = temp[0];
                notas[j][1] = temp[1];
            }
        }
    }
}

int main()
{
    float notas[N_ALUNOS][2];
    ler_notas(notas, N_ALUNOS);
    ordena(notas, N_ALUNOS);
    escrever_dados(notas, N_ALUNOS);
}