#include <stdio.h>
int main(){
    int op, pot, mul, i=1;
    while(1){ 
    printf("Insira um operando: ");
    scanf("%d", &op);

    printf("Insira outro operando (potencia de base 2): ");
    scanf("%d", &pot);
    i = 1;
    while(pot > 2){
        pot /= 2;
        i++;
    }
    
    mul = op << i;

    printf("O resultado da multiplicação é: %d\n", mul); 
    
}
return 0;
}