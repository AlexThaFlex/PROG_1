/*Escreva um programa que leia dois n´umeros inteiros e indique se o primeiro ´e m´ultiplo do segundo.*/

#include <stdio.h>
int main() {
    int num1, num2, resto;
    
    printf("Qual é o número1?\n");
    scanf("%d", &num1);
    printf("Qual é o número2?\n");
    scanf("%d", &num2);
    
    resto = num1 % num2;
    if (resto == 0)
    printf("num1 é múltiplo de num2.\n");
    else 
    printf("num1 é múltiplo de num2\n");

    return 0;
}