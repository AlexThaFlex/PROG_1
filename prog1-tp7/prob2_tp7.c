#include <stdio.h>

void ordena(int *valorA, int *valorB, int *valorC){
    printf("Valores a, b, c ordenados por ordem crescente: ");
    if(*valorA < *valorB && *valorA < *valorC)
    {
        if(*valorB < *valorC)
            printf("%d %d %d", *valorA, *valorB, *valorC);
        else 
            printf("%d %d %d", *valorA, *valorB, *valorC);
    }
    if(*valorB < *valorA && *valorB < *valorC)
    {
        if(*valorA < *valorC)
            printf("%d %d %d", *valorB, *valorA, *valorC);
        else 
            printf("%d %d %d", *valorB, *valorC, *valorA);
    }
    if(*valorC < *valorA && *valorC < *valorB)
    {
        if(*valorA < *valorB)
            printf("%d %d %d", *valorC, *valorA, *valorB);
        else 
            printf("%d %d %d", *valorC, *valorB, *valorA);
    }
}
int main()
{
    int a, b, c;
    printf("insira os valores a ordenar: ");
    scanf("%d %d %d", &a, &b, &c);
    ordena(&a,&b,&c);
    printf("\n");
    return 0;
}
