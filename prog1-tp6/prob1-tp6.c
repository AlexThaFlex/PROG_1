#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int v[30];
    int i, j;
    for(i=0; i < 30; i++){
        v[i] = rand() % 6 + 1 ;
    }

    printf("Histograma de 30 lançamentos: \n");
    for(i = 1; i <= 6 ; i++){
       printf(" %d - ", i);
         for(j = 0; j < 30; j++){
          if(v[j] == i) 
             printf("*");
    }
    printf("\n");
    }
    return 0;
    }