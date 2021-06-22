#include <stdio.h>
#include <math.h>
int main(){
    float popa, popb, ta, tb;
    int anos= 0;
    
    printf("Introduza o número de milhões de habitantes do país A. ");
    scanf("%f", &popa);
    printf("Introduza a taxa de crescimento de A. ");
    scanf("%f", &ta);
    printf("Introduza o número de milhões de habitantes do país B. ");
    scanf("%f", &popb);
    printf("Introduza a taxa de crescimento de B. ");
    scanf("%f", &tb);
    
    while(1){
        popa = popa + popa * ta/100;
        popb = popb + popb * tb/100;
        anos++;
        if(popb > popa) break;

    }
 
 printf("Populacâo de B ultrapassará a de A em %d anos\n", anos);

}