#include <stdio.h>
#include <string.h>

int multiplicacao(int primeiroNumero, int segundoNumero);

int main()
{
    int n1, n2;
    printf("Qual é o primeiro número");
    scanf("%d", &n1); 
    printf("Qual é o segundo número");
    scanf("%d", &n2);
    printf("O resultado de n1*n2 é: %d\n", multiplicacao(n1,n2));

    return 0;       
}

int multiplicacao(int primeiroNumero, int segundoNumero){ //só pode usar o + (recursividade)
    
    if(segundoNumero == 0) return 0;
    if(segundoNumero < 0) return -multiplicacao(primeiroNumero, -segundoNumero);
    else return primeiroNumero + multiplicacao(primeiroNumero, segundoNumero - 1);
}