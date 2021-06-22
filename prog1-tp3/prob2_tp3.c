/*Escreva um programa que converta informa¸c˜ao quantitativa em informa¸c˜ao qualitativa sobre a altura das pessoas.
Utilize as seguintes regras:
• uma pessoa com menos de 1.3 m ´e baix´ıssima;
• uma pessoa com altura entre 1.3 m e 1.6 m ´e baixa;
• uma pessoa com altura entre 1.6 m e 1.75 m ´e mediana;
• uma pessoa com altura entre 1.75 m e 1.9 m ´e alta;
• uma pessoa com altura superior a 1.9 m ´e alt´ıssima.
*/
#include <stdio.h>
#define TOLERANCIA 1.0e-6
int main() {
    float alt;
    printf("Qual é altura da pessoa?\n");
    scanf("%f", &alt);

    if(alt < 1.3)
    printf("Essa pessoa é baixíssima"); //falta tol ou double
    else if(alt >= 1.3 && alt < 1.6)
    printf("Essa pessoa é baixa");
    else if(alt >= 1.6 && alt <1.75)
    printf("Essa pessoa é mediana");
    else if(alt >=1.75 && alt <= 1.9)
    printf("Essa pessoa é alta");
    else
    printf("Essa pessoa é altíssima");

printf("\n");
    return 0;
}