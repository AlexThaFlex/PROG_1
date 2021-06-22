/*Escreva um programa que leia um n´umero decimal e escreva o n´umero com 3 casas decimais, a parte inteira e a
parte decimal.nao acbado com casting deve dar*/

#include <stdio.h>
int main(){
    float num, frac;
    printf("Escreva um número:\n");
    scanf("%f", &num);
    

    frac = num - (int) num;
    printf("Número com 3 casas decimais:%.3f\n", num);
    printf("Parte inteira:%.0f\n", num);
    printf("Parte decimal é:%f\n", frac);

    return 0;
    
}