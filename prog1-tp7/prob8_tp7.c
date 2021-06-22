#include<stdio.h>

void verifica(int num, int aux, int *k){
    *k=0;
    while(num !=0){
        if(num % 10 == aux) (*k)++;
        num /= 10;
    }
}

int main()
{
    int num, aux, k;
   printf("Introduza um número:");
   scanf("%d",&num);
   printf("Digite o numero a ser verificado:");
   scanf("%d",&aux);
   verifica(num, aux, &k);
   printf("Vezes de numeros repetidos %d\n",k);
   return 0;
}

