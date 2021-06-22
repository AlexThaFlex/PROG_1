#include <stdio.h>
int main() {
    int month, ano, cont = 0;
    float max, min, amp, ampmax = 0;

    for(int i = 1; i <=48; i++){
        printf("Introduza o ID do mês, a ondulação máxima e a ondulação mínima: \n");
        scanf("%d %f %f", &month, &max, &min);
          amp = max - min;
         
          if( amp >  ampmax){
               ampmax = amp; cont= month;

    }
    }
    if (cont > 12 && cont <= 24){
              cont = cont - 12;
              ano = 2015;
          }
          else if(cont > 24 && cont <= 36){
              cont = cont - 24;
              ano = 2016;
          }
          else if(cont > 36 && cont <= 48){
              cont = cont - 36;
              ano = 2017;}
          else ano = 2014;

    printf("Maior amplitude de ondulação: %.2f\n", ampmax); 
    printf("Registada no mês %d do ano %d\n", cont, ano);

    return 0;
}