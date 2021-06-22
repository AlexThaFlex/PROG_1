#include <stdio.h>
int main() {
    char c;
    int conta=0, conte=0, conti=0, conto=0, contu=0;
    printf("Introduza uma frase. \n");
    while(c != '.'){
        scanf(" %c", &c);
        switch (c){
            case 'a': conta++;break;
            case 'A': conta++;break;
            case 'e': conte++;break;
            case 'E': conte++;break;
            case 'i': conti++;break;
            case 'I': conti++;break;
            case 'o': conto++;break;
            case 'O': conto++;break;
            case 'u': contu++;break;
            case 'U': contu++;break;
        }
    }          
printf("A- %d\n", conta);
printf("E- %d\n", conte);
printf("I- %d\n", conti);
printf("O- %d\n", conto);
printf("U- %d\n", contu);

}