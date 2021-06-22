#include <stdio.h>


#define FILE_PATH "tarefas.txt"
#define MAX 100

typedef struct {
    char nome[MAX];
    int trabalhadores[31];
    int dias;
} tarefa;

int lerTarefas(tarefa tarefas[], int *n)
{
    FILE *f = fopen(FILE_PATH, "r");
    if(f == NULL) return 0;
    *n = 0;
    tarefa *t;
    
    while(fscanf(f, "%s", tarefas[*n].nome) != EOF) //lê a palavra
    {
        t = &tarefas[*n]; // *t= tarefas[*n]
        (*t).dias = 0; // podia ser t->dias = 0
        do
        {
            fscanf(f, "%d", &(t->trabalhadores[t->dias]));
            t->dias++;
        } while(t->trabalhadores[t->dias -1] != -1);
        t->dias--;
        (*n)++;
    }
    fclose(f);
    return 1;
}

int main()
{
    tarefa tarefas[MAX];
    int n;
    if(!lerTarefas(tarefas, &n))
    {
        printf("Ficheiro inválido. \n");
        return 0;
    }

    int mTarefas = 0, mTarefasCount = 0;
    int mTerminadas = 0, mTerminadasCount = 0;
    int c1, c2; //c1,dias trabalhados,   c2,tarefas terminadas
    for(int dia= 0; dia < 31; dia++)
    {
        c1=c2=0;
        for(int i=0; i<n; i++)
        {
            if(tarefas[i].dias > dia) c1++;
            if(tarefas[i].dias == dia) c2++;
        }
        if(c1 > mTarefasCount)
       {
           mTerminadasCount = c1;
           mTarefas = dia;
       }
        
        if(c2 > mTerminadasCount)
        {
            mTerminadasCount = c2;
            mTerminadas = dia - 1; 
        }
    }
    
    int sum, mSum = 0, mSumTarefa = 0;
    for(int i=0; i<n; i++)
    {
        sum = 0;
        for(int dia=0; dia < tarefas[i].dias; dia++)
        {
            sum += tarefas[i].trabalhadores[dia];
        }
        if(sum > mSum)
        {
            mSum = sum;
            mSumTarefa = i;
        }
    }

    printf("Dia com mais tarefas: %d\n", mTarefas + 1);
    printf("Dia com mais tarefas acabadas: %d\n", mTerminadas + 1);
    printf("Tarefa com mais trabalhadores: %s\n", tarefas[mSumTarefa].nome);

return 0;
}
