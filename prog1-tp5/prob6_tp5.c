#include <stdio.h>

void ret(char car, int lin, int col){
    int i, j;
    for(i = 1; i <= col; i++){
        printf("%c", car);
    }
     
    for( i=1 ; i <= (lin - 2); i++){
      printf("\n");
        printf("%c" , car);
        for( j=1 ; j <= col - 2; j++){
            printf("_");
    }
    printf("%c" , car);
    
}
printf("\n");
     for(int i = 1; i <= col; i++){
        printf("%c", car);
     }
     printf("\n");
}


int main() {
    int lin, col;
    char car;
    printf("Introuza um caracter:\n");
    scanf(" %c", &car);
    printf("Introduza o número de linhas:\n");
    scanf("%d", &lin);
    printf("Introduza o número de colunas:\n");
    scanf("%d", &col);

    ret(car, lin, col);

    return 0;
}