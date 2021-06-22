#include <stdio.h>
void pesoideal( float alt, char sex){
    float pes;
switch (sex)
    {
    case 'M': pes = 72.7 * alt - 58;
    printf("O peso ideal seria %.2f quilos. \n", pes);
    break;
    case 'F': pes = 62.1 * alt - 44.7;
    printf("O peso ideal seria %.2f quilos. \n", pes);
    break;
    default: printf("Inválido\n");
        break;
    }
}


int main(){
    float alt, pes;
    char sex;
    
    printf("Insira a altura da pessoa: ");
    scanf("%f", &alt);
    printf("Introduza o sexo da pessoa(M/F): ");
    scanf(" %c", &sex);

    pesoideal(alt, sex);
    return 0;
}