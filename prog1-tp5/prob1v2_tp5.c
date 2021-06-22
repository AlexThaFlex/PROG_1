#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio( int limiteinferior, int limitesuperior){
 return rand() % (limitesuperior - limiteinferior +1) + limiteinferior;
}

int main(){
    int n, s=0;
    printf("Quantos lançamentos? \n");
    scanf("%d", &n);

    srand(time(NULL));

    while(n > 0){
        if(aleatorio(1,6) == 6)
        s++;
        n--;
    }
    printf("A face seis saiu %d vezes.\n", s);
    return 0;
}