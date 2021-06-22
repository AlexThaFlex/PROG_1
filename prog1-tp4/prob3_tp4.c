//capital acumulado (ca) ao fim de n anos de um capital
//inicial (ci) atualizado a uma taxa de juro anual constante (j). 

#include <stdio.h>

float cap(int j, int n, int ci){
    float x;
    x = 1 + ((float) j / 100);
    for(int i = 0; i < n; i++){
        ci *= x;  //faz n vezes, while substitui o expoente,
    }
    return ci;
}
int main()
{
    float ci;
    int j, n;
    printf("Qual é o capital inicial? \n"); scanf("%f", &ci);
    printf("Qual é a taxa de juro dada pelo banco? (percentagem)\n"); scanf("%d", &j);
    printf("Durante quantos anos? \n"); scanf("%d", &n);

   
   

    printf("O capital acumulado ao fim de %d anos e de %.3f euros\n", n, cap(j, n, ci));
}
