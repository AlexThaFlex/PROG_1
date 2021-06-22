/* Escreva um programa que leia a temperatura em graus Celsius e apresente a temperatura equivalente em Kelvin
e em graus Fahrenheit. Os valores devem ser apresentados com 2 casas decimais.*/

#include <stdio.h>
int main() {
    int c, k, f;
    
    printf("Escreva a temperatura em graus Celsius: \n");
    scanf("%d", &c);
   
    k = c + 273.15;
    f = c * 9 / 5 + 32;

    printf("As temperatura em graus Kelvin, Celsius e Fahrenheit, respetivamente são: %d, %d, %d\n", k, c, f);

    return 0;
 
}