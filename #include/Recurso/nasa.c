#include <stdio.h>

#define N_PILOTOS 60

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

int ler_voos(float horas[])
{
    /* problema 2.1 */
    int id=0, cont=0;
    float hor;
    while((scanf("%d", &id) == 1) && cont<60)
    {
        scanf("%f", &hor);
        horas[id]= hor;
        cont++;
    }
    return cont;
}

/****************************************************/

float processa_voos(float horas[], int pilotos[], int *nPilotos)
{
    /* problema 2.2 */
    int i=1, cont=0;
    float avg = 0;
    *nPilotos = 0;
    
    while(i <= N_PILOTOS)
    {
        if(horas[i] > 0)
        {
            avg += horas[i];
            cont++;
        }
    i++;
    }
    avg /= cont;

    for(int j=1; j<=N_PILOTOS; j++)
    {
        if(horas[j] < avg && horas[j] > 0)
        {
            pilotos[(*nPilotos)++] = j;
        }
    }
    return avg;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/

int main()
{
    float voos[N_PILOTOS+1] = {0}, media;
    int pilotos[N_PILOTOS], nRes=0, total, i;

/****************************************************/
    total = ler_voos(voos);
    printf("\nNumero total de pilotos com voo registado: %d\n", total);
/****************************************************/
    media = processa_voos(voos, pilotos, &nRes);
    printf("\nMedia de horas de voo: %.1f\n", media);
    printf("Pilotos com voos abaixo da media (%d):\n", nRes);
    for(i=0; i<nRes; i++)
        printf("%d ", pilotos[i]);
    printf("\n\n");
/****************************************************/

    return 0;
}