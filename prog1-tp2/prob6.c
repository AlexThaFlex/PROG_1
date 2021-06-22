#include <stdio.h>
#include <math.h>

int main() {
    int b1, b2, b3, b4, dec;

    printf("Qual é o valor do primeiro bit? \n");
    scanf("%d", &b1);
    printf("Qual é o valor do segundo bit? \n");
    scanf("%d", &b2);
    printf("Qual é o valor do terceiro bit? \n");
    scanf("%d", &b3);
    printf("Qual é o valor do quarto bit? \n");
    scanf("%d", &b4);

    dec = b1 * pow(2, 3) + b2 * pow(2, 2) + b3 * pow(2,1) + b4 * pow(2,0);

    printf("O valor na base decimal: %d\n", dec);
    printf("O valor na base octal: %o\n", dec);
    printf("O valor na base hexadecimal: %x\n", dec);
     
     return 0;

}